/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    void preorder(Node *root, vector<int> &nums)
    {
        if (root != NULL)
        {
            nums.push_back(root->val);
            for (Node *child : root->children)
            {
                preorder(child, nums);
            }
        }
    }
    vector<int> preorder(Node *root)
    {
        vector<int> nums;

        if (root == NULL)
        {
            return nums;
        }

        preorder(root, nums);

        return nums;
    }
};