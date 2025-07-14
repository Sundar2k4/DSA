// User function Template for C++

class Solution
{
public:
    vector<vector<string>> anagrams(vector<string> &arr)
    {

        vector<vector<string>> ans;

        int n = arr.size();

        unordered_map<string, vector<string>> anamap;

        vector<string> intermed;

        for (string s : arr)
        {
            string key = s;
            sort(key.begin(), key.end());
            if (anamap.find(key) == anamap.end())
            {
                intermed.push_back(key);
            }

            anamap[key].push_back(s);
        }

        for (string &key : intermed)
        {
            ans.push_back(anamap[key]);
        }

        return ans;
    }
};