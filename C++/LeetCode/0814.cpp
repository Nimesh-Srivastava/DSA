// Solution 1 :-
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

// Solution 2 :-
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if (!root)
            return NULL;
        
        root -> left = pruneTree(root -> left);
        root -> right = pruneTree(root -> right);
        
        if (!root -> left && !root -> right && root -> val == 0)
            return NULL;
        
        return root;
    }
};
