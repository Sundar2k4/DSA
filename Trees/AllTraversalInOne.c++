/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

vector<int> inorder(TreeNode *root)
{
    vector<int> ans;
    if (!root)
    {
        return ans;
    }

    vector<int> left = inorder(root->left);
    ans.insert(ans.end(), left.begin(), left.end());
    ans.push_back(root->data);
    vector<int> right = inorder(root->right);
    ans.insert(ans.end(), right.begin(), right.end());

    return ans;
}

vector<int> preorder(TreeNode *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    ans.push_back(root->data);

    vector<int> left = preorder(root->left);
    ans.insert(ans.end(), left.begin(), left.end());

    vector<int> right = preorder(root->right);
    ans.insert(ans.end(), right.begin(), right.end());

    return ans;
}

vector<int> postorder(TreeNode *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    vector<int> left = postorder(root->left);
    ans.insert(ans.end(), left.begin(), left.end());

    vector<int> right = postorder(root->right);
    ans.insert(ans.end(), right.begin(), right.end());

    ans.push_back(root->data);

    return ans;
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    vector<int> ans1 = inorder(root);
    vector<int> ans2 = preorder(root);
    vector<int> ans3 = postorder(root);
    vector<vector<int>> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    ans.push_back(ans3);

    return ans;
}