class Solution
{
public:
    string intToRoman(int num)
    {
        map<int, string> romanMap;

        romanMap[1] = "I";
        romanMap[4] = "IV";
        romanMap[5] = "V";
        romanMap[9] = "IX";
        romanMap[10] = "X";
        romanMap[40] = "XL";
        romanMap[50] = "L";
        romanMap[90] = "XC";
        romanMap[100] = "C";
        romanMap[400] = "CD";
        romanMap[500] = "D";
        romanMap[900] = "CM";
        romanMap[1000] = "M";

        string res = "";

        int arr[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

        int n = 13;

        for (int i = n - 1; i >= 0; i--)
        {
            if (num >= arr[i])
            {
                int val = num / arr[i];
                num = num % arr[i];
                for (int j = 0; j < val; j++)
                {
                    res += romanMap[arr[i]];
                }
            }
        }

        return res;
    }
};