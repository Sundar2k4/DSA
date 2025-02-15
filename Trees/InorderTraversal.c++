class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> vc;
        sidekick(root, vc);
        return vc;
    }

private:
    void sidekick(TreeNode *root, vector<int> vc)
    {
        if (!root)
        {
            return;
        }
        else
        {
            sidekick(root->left, vc);
            vc.push_back(root->val);
            sidekick(root->right, vc);
        }
    }
};