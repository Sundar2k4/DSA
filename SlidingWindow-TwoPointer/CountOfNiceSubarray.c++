class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        int right = 0, left = 0, count = 0, sum = 0;

        while (right < n)
        {
            sum += (nums[right] % 2);

            while (sum > k)
            {
                sum -= (nums[left] % 2);
                left++;
            }
            if (sum == k)
            {
                count++;
                int tempLeft = left;
                while (tempLeft < right && nums[tempLeft] % 2 == 0)
                {
                    count++;
                    tempLeft++;
                }
            }

            right++;
        }

        return count;
    }
};
