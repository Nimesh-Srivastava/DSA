class Solution {
private:
  int m_ans{0};

public:
  void solve(TreeNode *root, bool isLeft = true, int count = 0) {
    if (!root)
      return;
    m_ans = std::max(m_ans, count);
    if (isLeft) {
      solve(root->right, false, count + 1);
      solve(root->left, true, 1);
    } else {
      solve(root->left, true, count + 1);
      solve(root->right, false, 1);
    }
  }
  int longestZigZag(TreeNode *root) {
    solve(root);
    return m_ans;
  }
};