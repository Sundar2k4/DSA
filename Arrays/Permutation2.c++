class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> perm;
        unordered_map<int, int> umap;

        for (auto &i : nums)
        {
            umap[i]++;
        }

        dfs(nums, res, perm, umap);
        return res;
    }
    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> &perm, unordered_map<int, int> &umap)
    {
        if (perm.size() == nums.size())
        {
            res.push_back(perm);
            return;
        }

        for (auto &[n, cnt] : umap)
        {
            if (cnt > 0)
            {
                perm.push_back(n);
                umap[n]--;

                dfs(nums, res, perm, umap);

                umap[n]++;
                perm.pop_back();
            }
        }
    }
};