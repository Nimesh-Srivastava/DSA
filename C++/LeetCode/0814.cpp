class Solution {
public:
  TreeNode *pruneTree(TreeNode *root) {
    if (!root)
      return nullptr;
    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);
    if (root->val == 1 or root->left or root->right)
      return root;
    return nullptr;
  }
};