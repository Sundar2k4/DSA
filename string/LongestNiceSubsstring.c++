class Solution
{
public:
    bool checkalpha(int a, int b, string &s)
    {
        unordered_set<char> chars;

        for (int i = a; i <= b; i++)
        {
            chars.insert(s[i]);
        }

        for (int i = a; i <= b; i++)
        {
            char c = s[i];

            if (isalpha(c))
            {
                if (islower(c))
                {
                    if (chars.find(toupper(c)) == chars.end())
                    {
                        return false;
                    }
                }
                else
                {
                    if (chars.find(tolower(c)) == chars.end())
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
    string longestNiceSubstring(string s)
    {
        int n = s.size();
        int maxlen = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (checkalpha(i, j, s))
                {
                    int len = j - i + 1;
                    if (len > maxlen)
                    {
                        maxlen = len;
                        ans = s.substr(i, len);
                    }
                }
            }
        }

        return ans;
    }
};