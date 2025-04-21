class Solution
{
public:
    int mins = INT_MAX;
    TreeNode *prev = nullptr;

    void getmindiff(TreeNode *root)
    {
        if (!root)
            return;

        getmindiff(root->left);

        if (prev != nullptr)
        {
            mins = min(mins, abs(root->val - prev->val));
        }
        prev = root;

        getmindiff(root->right);
    }

    int getMinimumDifference(TreeNode *root)
    {
        getmindiff(root);
        return mins;
    }
};
