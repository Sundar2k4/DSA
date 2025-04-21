class Solution
{
public:
    void pushNodes(TreeNode *root, vector<int> &vc)
    {
        if (root == nullptr)
            return;

        // Preorder traversal: root, left, right
        vc.push_back(root->val);
        pushNodes(root->left, vc);
        pushNodes(root->right, vc);
    }

    int countNodes(TreeNode *root)
    {
        vector<int> vc;
        pushNodes(root, vc);
        return vc.size();
    }
};
