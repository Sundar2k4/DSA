/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int, int> mpp;
        queue<pair<Node *, int>> q;
        if (root == nullptr)
        {
            return ans;
        }

        q.push({root, 0});

        while (!q.empty())
        {
            auto pair = q.front();
            q.pop();
            Node *node = pair.first;
            int line = pair.second; // line takes iterator of 0 to -1 in left and 0 to 1 in right

            if (mpp.find(line) == mpp.end())
            {
                mpp[line] = node->data;
            }

            if (node->left)
            {
                q.push({node->left, line - 1});
            }
            if (node->right)
            {
                q.push({node->right, line + 1});
            }
        }

        for (auto &pair : mpp)
        {
            ans.push_back(pair.second);
        }

        return ans;
    }
};