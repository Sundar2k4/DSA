class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.length();
        unordered_map<char, int> hash;
        int count = 0;

        for (int i = 0; i < n; i++)
        {

            hash.clear();
            for (int j = i; j < n; j++)
            {

                hash[s[j]]++;
                if (hash['a'] > 0 && hash['b'] > 0 && hash['c'] > 0)
                {
                    count++;
                }
            }
        }

        return count;
    }
};
