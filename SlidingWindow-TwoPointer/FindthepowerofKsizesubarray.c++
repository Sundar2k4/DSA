class Solution
{
public:
    void findmax(int s, int f, vector<int> &ans, vector<int> nums)
    {
        int maxval = 0;
        for (int i = s; i <= f; i++)
        {
            if (nums[i] > maxval)
            {
                maxval = nums[i];
            }
        }

        ans.push_back(maxval);
    }
    bool issorted(int s, int f, vector<int> nums)
    {
        if (is_sorted(nums.begin() + s, nums.begin() + f + 1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isconsecutive(int s, int f, vector<int> nums)
    {
        for (int i = s; i < f; i++)
        {
            if (nums[i + 1] - nums[i] != 1)
                return false;
        }
        return true;
    }

    vector<int> resultsArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int s = 0;
        int f = k - 1;
        vector<int> ans;

        while (f <= n - 1)
        {
            if (issorted(s, f, nums) && isconsecutive(s, f, nums))
            {
                findmax(s, f, ans, nums);
            }
            else
            {
                ans.push_back(-1);
            }

            s++;
            f++;
        }

        return ans;
    }
};