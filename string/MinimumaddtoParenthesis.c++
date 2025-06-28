class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int n = s.size();
        int unmatchedopened = 0;
        int excessclosed = 0;

        for (auto &i : s)
        {
            if (i == '(')
            {
                unmatchedopened++;
            }
            else if (i == ')')
            {
                if (unmatchedopened > 0)
                {
                    unmatchedopened--;
                }
                else
                {
                    excessclosed++;
                }
            }
        }

        return unmatchedopened + excessclosed;
    }
};