class Solution
{
public:
    vector<vector<int>> getPairs(vector<int> &arr)
    {
        vector<vector<int>> ans;

        int zeroCount = count(arr.begin(), arr.end(), 0);

        set<int> st(arr.begin(), arr.end());

        for (int x : st)
        {
            if (x < 0 && st.count(-x))
            {
                ans.push_back({x, -x});
            }
        }

        if (zeroCount >= 2)
        {
            ans.push_back({0, 0});
        }

        return ans;
    }
};
