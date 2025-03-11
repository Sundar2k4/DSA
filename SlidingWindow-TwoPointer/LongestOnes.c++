class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int n = nums.size();
        int maxc = 0;
        int count = 0;
        int right = 0, left = 0;
        while (right < n)
        {
            if (nums[right] == 0)
            {
                count++;
            }
            while (count > k)
            {
                if (nums[left] == 0)
                {
                    count--;
                }

                left++;
            }

            maxc = max(maxc, right - left + 1);

            right++;
        }

        return maxc;
    }
};