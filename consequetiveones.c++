class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        int countval = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                if (count > countval)
                {
                    countval = count;
                }
                count = 0;
            }
        }
        if (count > countval)
        {
            countval = count;
        }

        return countval;
    }
};