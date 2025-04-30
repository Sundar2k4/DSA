class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;

        queue<TreeNode *> nodeq;
        nodeq.push(root);
        bool leftToRight = true;

        while (!nodeq.empty())
        {
            int n = nodeq.size();
            vector<int> row(n);

            for (int i = 0; i < n; ++i)
            {
                TreeNode *node = nodeq.front();
                nodeq.pop();

                int index = leftToRight ? i : (n - 1 - i);
                row[index] = node->val;

                if (node->left)
                    nodeq.push(node->left);
                if (node->right)
                    nodeq.push(node->right);
            }

            leftToRight = !leftToRight;
            result.push_back(row);
        }

        return result;
    }
};
