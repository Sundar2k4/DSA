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
    void postorders(Node *root, vector<int> &nums)
    {
        if (root != NULL)
        {
            for (Node *child : root->children)
            {
                postorders(child, nums);
            }
            nums.push_back(root->val);
        }
    }
    vector<int> postorder(Node *root)
    {
        vector<int> nums;
        postorders(root, nums);

        if (root == NULL)
        {
            return nums;
        }

        return nums;
    }
};