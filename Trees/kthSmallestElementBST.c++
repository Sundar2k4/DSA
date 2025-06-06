class Solution
{
public:
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> vc;
        inorder(root, vc);
        return vc[k - 1];
    }

private:
    void inorder(TreeNode *root, vector<int> &vc)
    {
        if (!root)
            return;
        inorder(root->left, vc);
        vc.push_back(root->val);
        inorder(root->right, vc);
    }
};
