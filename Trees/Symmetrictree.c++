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
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        return symetri(root->left, root->right);
    }

private:
    bool symetri(TreeNode *node1, TreeNode *node2)
    {
        if (node1 == NULL && node2 == NULL)
        {
            return true;
        }
        if (node1 == NULL || node2 == NULL)
        {
            return false;
        }

        return node1->val == node2->val && symetri(node1->right, node2->left) && symetri(node1->left, node2->right);
    }
};