class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> vt;
        for (int i = 0; i < n; i++)
        {
            vt.push_back(nums[i] * nums[i]);
        }

        sort(vt.begin(), vt.end());

        return vt;
    }
};