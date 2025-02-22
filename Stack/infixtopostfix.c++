//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    int getprecedence(char op)
    {
        unordered_map<char, int> precedence = {
            {'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'%', 2}, {'^', 3}};

        return precedence.count(op) ? precedence[op] : -1;
    }

public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string &s)
    {
        string ans = "";
        stack<char> st;
        int j = 0;
        for (char i : s)
        {
            if (isalnum(i))
            {
                ans += i;
            }
            else if (i == '(')
            {
                st.push(i);
            }
            else if (i == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }

                if (!st.empty())
                    st.pop();
            }
            else
            {
                while (!st.empty() && getprecedence(i) <= getprecedence(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }

                st.push(i);
            }
        }

        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};

//{ Driver Code Starts.
//  Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends