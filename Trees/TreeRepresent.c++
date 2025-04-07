// User function Template for C++

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution
{
public:
    node *create_tree_helper(vector<int> &vec, int index)
    {
        if (index >= vec.size())
        {
            return nullptr;
        }

        node *root = newNode(vec[index]);
        root->left = create_tree_helper(vec, 2 * index + 1);
        root->right = create_tree_helper(vec, 2 * index + 2);
        return root;
    }

    void create_tree(node *&root0, vector<int> &vec)
    {
        root0 = create_tree_helper(vec, 0);
    }
};