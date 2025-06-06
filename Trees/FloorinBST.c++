class Solution
{
public:
    int floor(Node *root, int x)
    {
        vector<int> ans;
        int maxval = -1;
        if (!root)
            return maxval;

        helper(root, ans);

        for (auto &i : ans)
        {
            if (i <= x)
            {
                maxval = max(maxval, i);
            }
        }

        return maxval;
    }

private:
    void helper(Node *root, vector<int> &ans)
    {
        if (!root)
            return;
        ans.push_back(root->data);
        helper(root->left, ans);
        helper(root->right, ans);
    }
};
