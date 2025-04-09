class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> charmap;
        for (char c : s)
        {
            charmap[c]++;
        }

        vector<pair<char, int>> vec(charmap.begin(), charmap.end());

        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
             { return a.second > b.second; });

        string ans = "";
        for (const auto &pair : vec)
        {
            ans += string(pair.second, pair.first);
        }

        return ans;
    }
};
