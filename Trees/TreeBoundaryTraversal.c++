
// Tree Node
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize a new node
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    vector<int> boundaryTraversal(Node *root)
    {
        vector<int> ans;
        if (!root)
        {
            return ans;
        }

        if (!isleaf(root))
        {
            ans.push_back(root->data); // add non leaf nodes
        }

        lefthelper(root, ans);
        leafhelper(root, ans);
        righthelper(root, ans);
    }

private:
    bool isleaf(Node *node)
    {
        return node != nullptr && node->right == nullptr && node->left == nullptr;
    }
    void lefthelper(Node *root, vector<int> &ans)
    {
        Node *curr = root->left;

        while (curr)
        {
            if (!isleaf(curr))
            {
                ans.push_back(curr->data);
            }
            if (curr->left)
            {
                curr = curr->left;
            }
            else
            {
                curr = curr->right;
            }
        }
    }

    void righthelper(Node *root, vector<int> &ans)
    {
        Node *curr = root->right;
        stack<int> st;

        while (curr)
        {
            if (!isleaf(curr))
            {
                st.push(curr->data);
            }
            if (curr->right)
            {
                curr = curr->right;
            }
            else
            {
                curr = curr->left;
            }
        }

        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }

    void leafhelper(Node *root, vector<int> &ans)
    {
        if (isleaf(root))
        {
            ans.push_back(root->data);
            return;
        }

        if (root->left)
        {
            leafhelper(root->left, ans);
        }
        if (root->right)
        {
            leafhelper(root->right, ans);
        }
    }
};