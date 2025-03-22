#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> ans;
        string val;

        // Convert the num vector to string
        for (auto &i : num)
        {
            val += to_string(i);
        }

        // Add k to the string representation
        int i = val.size() - 1;
        int carry = 0;

        while (i >= 0 || k > 0)
        {
            int digit = (i >= 0 ? val[i] - '0' : 0);
            int sum = digit + (k % 10) + carry;

            ans.push_back(sum % 10);
            carry = sum / 10;

            k /= 10;
            i--;
        }

        if (carry > 0)
        {
            ans.push_back(carry);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
