class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        string current;
        backtrack(n, current, 0, 0, res);
        return res;
    }

    void backtrack(int n, string &current, int open, int closed, vector<string> &res)
    {
        if (open == n && closed == n)
        {
            res.push_back(current);
            return;
        }

        if (open < n)
        {
            current.push_back('(');
            backtrack(n, current, open + 1, closed, res);
            current.pop_back();
        }

        if (closed < open)
        {
            current.push_back(')');
            backtrack(n, current, open, closed + 1, res);
            current.pop_back();
        }
    }
};