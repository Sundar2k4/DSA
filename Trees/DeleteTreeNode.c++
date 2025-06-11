class Solution
{
public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->val == key)
        {
            return helper(root);
        }
        TreeNode *dummy = root;
        while (root != NULL)
        {
            if (root->val > key) // searching for the key
            {
                if (root->left != NULL && root->left->val == key)
                {
                    root->left = helper(root->left); // passing after finding the required node
                    break;
                }
                else
                {
                    root = root->left;
                }
            }
            else
            {
                if (root->val < key)
                {
                    if (root->right != NULL && root->right->val == key)
                    {
                        root->right = helper(root->right);
                        break;
                    }
                    else
                    {
                        root = root->right;
                    }
                }
            }
        }
        return dummy;
    }

private:
    TreeNode *helper(TreeNode *root)
    {
        if (root->left == NULL)
        {
            return root->right; // condition to check whether left node is absent
        }
        else if (root->right == NULL)
        {
            return root->left; // condition to check whether the right node is absent
        }

        TreeNode *rightchild = root->right;                    // store the right child
        TreeNode *lastright = findlastrightofleft(root->left); // find the last right of the left subtree inorder to join the rightchild
        lastright->right = rightchild;                         // join the right child to the last right of left

        return root->left; // return the root->left to join after the deletion
    }
    TreeNode *findlastrightofleft(TreeNode *root) // function to find the last right of left subtree
    {
        if (root->right == NULL)
        {
            return root;
        }

        return findlastrightofleft(root->right);
    }
};