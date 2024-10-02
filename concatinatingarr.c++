class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> vt(2 * n);
        for (int i = 0; i < n; i++)
        {
            vt[i] = nums[i];
            vt[i + n] = nums[i];
        }
        return vt;
    }
};