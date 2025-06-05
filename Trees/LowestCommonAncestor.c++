class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        vector<TreeNode *> pathp;
        vector<TreeNode *> pathq;

        findpath(root, p, pathp);
        findpath(root, q, pathq);

        TreeNode *lca = nullptr;
        int i = 0;
        while (i < pathp.size() && i < pathq.size() && pathp[i] == pathq[i])
        {
            lca = pathp[i];
            i++;
        }

        return lca;
    }

private:
    bool findpath(TreeNode *root, TreeNode *target, vector<TreeNode *> &path)
    {
        if (!root)
            return false;

        path.push_back(root);

        if (root == target)
            return true;

        if (findpath(root->left, target, path) || findpath(root->right, target, path))
            return true;

        path.pop_back();
        return false;
    }
};
