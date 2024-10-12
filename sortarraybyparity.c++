class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> vt;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                vt.push_back(nums[i]);
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (nums[j] % 2 != 0)
            {
                vt.push_back(nums[j]);
            }
        }

        return vt;
    }
};