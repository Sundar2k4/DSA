class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> romanToIntMap;

        romanToIntMap['I'] = 1;
        romanToIntMap['V'] = 5;
        romanToIntMap['X'] = 10;
        romanToIntMap['L'] = 50;
        romanToIntMap['C'] = 100;
        romanToIntMap['D'] = 500;
        romanToIntMap['M'] = 1000;

        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < s.size() && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]])
            {
                ans += (romanToIntMap[s[i + 1]] - romanToIntMap[s[i]]);
                i++;
            }
            else
            {
                ans += romanToIntMap[s[i]];
            }
        }

        return ans;
    }
};
