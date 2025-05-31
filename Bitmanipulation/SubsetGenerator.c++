class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        int total = 1 << n;

        for (int mask = 0; mask < total; mask++)
        {
            vector<int> intermed; // clear for each subset
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                { // check if i-th bit is set
                    intermed.push_back(nums[i]);
                }
            }
            ans.push_back(intermed);
        }
        return ans;
    }
};
