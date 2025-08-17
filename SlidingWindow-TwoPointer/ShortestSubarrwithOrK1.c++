class Solution
{
public:
    int minimumSubarrayLength(vector<int> &nums, int k)
    {
        int n = nums.size();
        int s = 0, f = 1;
        int minlen = INT_MAX;

        while (s < n)
        {
            if (nums[s] >= k)
            {
                return 1;
            }

            int ans = nums[s];
            while (f < n)
            {
                ans |= nums[f];
                if (ans >= k)
                {
                    minlen = min(minlen, f - s + 1);
                    break;
                }
                f++;
            }
            s++;
            f = s + 1;
        }

        return (minlen == INT_MAX ? -1 : minlen);
    }
};
