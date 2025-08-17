class Solution
{
public:
    bool checkcond(int i, int &j, int k, string s)
    {
        int count1 = 0;
        int count0 = 0;

        for (int p = i; p <= j; p++)
        {
            if (s[p] == '1')
                count1++;
            else
                count0++;
        }

        return (count1 <= k || count0 <= k);
    }

    int countKConstraintSubstrings(string s, int k)
    {
        int n = s.size();
        int i = 0;
        int j = 0;
        int count = 0;

        while (i < n && j < n)
        {
            if (checkcond(i, j, k, s))
            {
                count += (j - i + 1);
                j++;
            }
            else
            {
                i++;
                if (j < i)
                    j = i;
            }
        }

        return count;
    }
};
