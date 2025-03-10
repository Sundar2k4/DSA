class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<char> st;
        int n = num.length();

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && k > 0 && st.top() > num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0 && !st.empty())
        {
            st.pop();
            k--;
        }
        string ans;
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        int zero = 0;
        while (zero < ans.length() && ans[zero] == '0')
        {
            zero++;
        }

        return (zero == ans.size()) ? "0" : ans.substr(zero);
    }
};
