class Solution
{
public:
    bool ispoweroftwo(int n)
    {
        if (n <= 0)
            return false;
        while (n > 1)
        {
            if (n % 2 != 0)
            {
                return false;
            }
            n /= 2;
        }
        return n == 1;
    }

    bool reorderedPowerOf2(int n)
    {
        if (ispoweroftwo(n))
        {
            return true;
        }

        vector<int> numbers;

        while (n > 0)
        {
            int digit = n % 10;
            numbers.push_back(digit);
            n /= 10;
        }

        sort(numbers.begin(), numbers.end());

        vector<vector<int>> ans;

        do
        {
            ans.push_back(numbers);
        } while (next_permutation(numbers.begin(), numbers.end()));

        for (int i = 0; i < ans.size(); i++)
        {
            string s;
            for (int j = 0; j < ans[i].size(); j++)
            {
                if (ans[i][0] == 0)
                {
                    break;
                }

                s += to_string(ans[i][j]);
            }

            if (!s.empty())
            {
                int val = stoi(s);
                if (ispoweroftwo(val))
                {
                    return true;
                }
            }
        }

        return false;
    }
};
