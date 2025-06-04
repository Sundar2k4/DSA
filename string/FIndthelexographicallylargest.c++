class Solution
{
public:
    string answerString(string word, int numFriends)
    {
        if (numFriends == 1)
        {
            return word;
        }

        vector<int> vc;

        int ch = *max_element(word.begin(), word.end());

        int n = word.size();

        int ele = n - numFriends + 1;

        string maxa = " ";

        for (int i = 0; i < n; i++)
        {
            if (ch == word[i])
            {
                vc.push_back(i);
            }
        }

        for (auto &i : vc)
        {
            string ans = (ele <= n - i) ? word.substr(i, ele) : word.substr(i);
            maxa = max(maxa, ans);
        }

        return maxa;
    }
};