class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == nullptr)
        {
            return ans;
        }
        ans.push_back({root->val});
        lhelper(root, ans);
        return ans;
    }

private:
    void lhelper(TreeNode *root, vector<vector<int>> &ans)
    {
        vector<TreeNode *> currlevel;

        if (root->left)
        {
            currlevel.push_back(root->left);
        }
        if (root->right)
        {
            currlevel.push_back(root->right);
        }

        while (!currlevel.empty())
        {
            vector<int> values;
            vector<TreeNode *> nextlevel;

            for (TreeNode *node : currlevel)
            {
                values.push_back(node->val);
                if (node->left)
                {
                    nextlevel.push_back(node->left);
                }
                if (node->right)
                {
                    nextlevel.push_back(node->right);
                }
            }

            ans.push_back(values);
            currlevel = nextlevel;
        }
    }
};
