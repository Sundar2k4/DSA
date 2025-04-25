/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int ans = 0;
    int HeightHelper(TreeNode *root)
    {
        if (root == 0)
        {
            return 0;
        }
        int lh = HeightHelper(root->left);
        int rh = HeightHelper(root->right);

        ans = max(ans, lh + rh);

        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        HeightHelper(root);
        return ans;
    }
};