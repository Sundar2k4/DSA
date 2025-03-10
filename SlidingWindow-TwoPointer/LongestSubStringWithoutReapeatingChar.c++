class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int len = 0;
        int maxlen = 0;
        for (int i = 0; i < n; i++)
        {
            int hashmap[256] = {0};
            int len = 0;
            for (int j = i; j < n; j++)
            {
                if (hashmap[s[j]] == 1)
                {
                    break;
                }

                len = j - i + 1;
                maxlen = max(len, maxlen);

                hashmap[s[j]] = 1;
            }
        }

        return maxlen;
    }
};