class Solution
{
public:
    int myAtoi(string s)
    {
        size_t pos = s.find_first_not_of(" \t\r\n");
        if (pos == string::npos)
            return 0;

        string clean = s.substr(pos);

        int i = 0;
        int sign = 1;

        if (clean[0] == '-' || clean[0] == '+')
        {
            sign = (clean[0] == '-') ? -1 : 1;
            i++;
        }

        long long ans = 0;

        while (i < clean.size() && isdigit(clean[i]))
        {
            ans = ans * 10 + (clean[i] - '0');
            if (sign == 1 && ans > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -ans < INT_MIN)
                return INT_MIN;

            i++;
        }

        return (int)(ans * sign);
    }
};
