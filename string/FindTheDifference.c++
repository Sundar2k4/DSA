#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int n = t.length();
        char ans = '\0';

        for (int i = 0; i < n; i++)
        {
            if (s.find(t[i]) == string::npos)
            {
                ans = t[i];
                break;
            }
            else
            {

                s.erase(s.find(t[i]), 1);
            }
        }

        return ans;
    }
};
