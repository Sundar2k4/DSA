class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = "";
        string word1, wordn;
        sort(strs.begin(), strs.end());
        word1 = strs[0];
        int m = strs.size();
        wordn = strs[m - 1];
        int n = min(word1.size(), wordn.size());
        for (int i = 0; i < n; i++)
        {
            if (word1[i] != wordn[i])
            {
                return prefix;
            }
            prefix += word1[i];
        }

        return prefix;
    }
};