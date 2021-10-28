class Solution {
private:
  int m_sum = 0;

public:
  void countGood(TreeNode *root, int max = INT_MIN) {
    if (!root)
      return;
    if (max <= root->val)
      m_sum++;
    max = std::max(root->val, max);
    countGood(root->right, max);
    countGood(root->left, max);
  }
  int goodNodes(TreeNode *root) {
    countGood(root);
    return m_sum;
  }
};