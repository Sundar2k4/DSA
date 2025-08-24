
class Solution
{
public:
    bool checkpal(int i, int j, string s)
    {
        int x = i;
        int y = j;

        while (x <= y)
        {
            if (s[x] == s[y])
            {
                x++;
                y--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    int countSubstrings(string s)
    {
        int n = s.size();

        int count = n;
        int i = 0;
        int j = i + 1;

        while (i < n - 1)
        {
            if (j < n && checkpal(i, j, s))
            {
                count++;
            }

            j++;

            if (j == n)
            {
                i++;
                j = i + 1;
            }
        }

        return count;
    }
};
