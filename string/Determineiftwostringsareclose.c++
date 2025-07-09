class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
        {
            return false;
        }

        vector<int> word1freq;
        vector<int> word2freq;
        unordered_map<char, int> word11;
        unordered_map<char, int> word22;
        for (char i : word1)
        {
            word11[i]++;
        }

        for (char j : word2)
        {
            word22[j]++;
        }

        for (auto &pair : word11)
        {
            if (word22.count(pair.first) == 0)
            {
                return false;
            }
            word1freq.push_back(pair.second);
        }

        for (auto &pair : word22)
        {
            if (word11.count(pair.first) == 0)
            {
                return false;
            }
            word2freq.push_back(pair.second);
        }

        sort(word1freq.begin(), word1freq.end());
        sort(word2freq.begin(), word2freq.end());

        return word1freq == word2freq;
    }
};