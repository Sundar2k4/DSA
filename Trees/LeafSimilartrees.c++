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
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> help1;
        vector<int> help2;
        helper(root1, help1);
        helper2(root2, help2);
        return help1 == help2;
    }

private:
    void helper(TreeNode *root1, vector<int> &help1)
    {
        if (!root1)
        {
            return;
        }

        if (root1->left == nullptr && root1->right == nullptr)
        {
            help1.push_back(root1->val);
        }
        helper(root1->right, help1);
        helper(root1->left, help1);
    }
    void helper2(TreeNode *root2, vector<int> &help2)
    {
        if (!root2)
        {
            return;
        }

        if (root2->left == nullptr && root2->right == nullptr)
        {
            help2.push_back(root2->val);
        }
        helper2(root2->right, help2);
        helper2(root2->left, help2);
    }
};