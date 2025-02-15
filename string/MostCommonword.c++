#include <iostream>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cctype>

using namespace std;

class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        unordered_map<string, int> umap;
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        string word, mostCommon;
        int maxFreq = 0;

        for (char &c : paragraph)
        {
            if (isalpha(c))
                c = tolower(c);
            else
                c = ' ';
        }

        istringstream iss(paragraph);

        while (iss >> word)
        {
            if (bannedSet.find(word) == bannedSet.end())
            {
                umap[word]++;
                if (umap[word] > maxFreq)
                {
                    maxFreq = umap[word];
                    mostCommon = word;
                }
            }
        }

        return mostCommon;
    }
};
