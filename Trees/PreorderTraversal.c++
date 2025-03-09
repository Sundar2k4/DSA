class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> vc;

        if (root == nullptr)
        {
            return vc;
        }
        vc.push_back(root->val);
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);
        vc.insert(vc.end(), left.begin(), left.end());
        vc.insert(vc.end(), right.begin(), right.end());

        return vc;
    }
};