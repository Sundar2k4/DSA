

class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int minVal = nums[i], maxVal = nums[i];
            for (int j = i; j < n; j++)
            {
                minVal = min(minVal, nums[j]);
                maxVal = max(maxVal, nums[j]);

                ans += (maxVal - minVal);
            }
        }

        return ans;
    }
};