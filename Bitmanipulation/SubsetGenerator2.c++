class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int total = 1 << n;

        for (int mask = 0; mask < total; mask++)
        {
            vector<int> intermed;
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    intermed.push_back(nums[i]);
                }
            }
            ans.push_back(intermed);
        }

        set<vector<int>> s(ans.begin(), ans.end());
        vector<vector<int>> result(s.begin(), s.end());
        return result;
    }
};
