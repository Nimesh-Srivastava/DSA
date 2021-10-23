class Solution {
private:
  int m_moves = 0;

public:
  int dist(TreeNode *root) {
    if (!root)
      return 0;
    int left{dist(root->left)}, right{dist(root->right)};
    m_moves += abs(right) + abs(left);
    return root->val + left + right - 1;
  }
  int distributeCoins(TreeNode *root) {
    dist(root);
    return m_moves;
  }
};