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
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> vc;
        bool ans;
        helper(root, vc);
        int n = vc.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = vc[i] + vc[j];
                if (sum == k)
                {
                    return true;
                }
            }
        }

        return false;
    }

private:
    void helper(TreeNode *root, vector<int> &vc)
    {
        if (!root)
        {
            return;
        }

        vc.push_back(root->val);
        helper(root->left, vc);
        helper(root->right, vc);
    }
};