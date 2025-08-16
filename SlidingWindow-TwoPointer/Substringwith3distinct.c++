class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        int count = 0;
        unordered_map<char, int> charmap;

        for (int i = 0; i < s.size(); i++)
        {
            charmap[s[i]]++;

            if (i >= 3)
            {
                charmap[s[i - 3]]--;
                if (charmap[s[i - 3]] == 0)
                {
                    charmap.erase(s[i - 3]);
                }
            }

            if (i >= 2 && charmap.size() == 3)
            {
                count++;
            }
        }

        return count;
    }
};