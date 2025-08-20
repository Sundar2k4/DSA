class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int s = 0, f = 0;
        int mask = 0;
        int maxlen = 0;

        while (f < n)
        {
            while ((mask & nums[f]) != 0)
            {
                mask ^= nums[s];
                s++;
            }

            mask |= nums[f];
            maxlen = max(maxlen, f - s + 1);
            f++;
        }

        return maxlen;
    }
};
