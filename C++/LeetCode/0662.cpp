class Solution {
private:
  int m_ans;
  std::vector<int> m_left;

public:
  void solve(TreeNode *root, int level = 0, long long curr = 0) {
    if (!root)
      return;
    if (level >= int(m_left.size()))
      m_left.push_back(curr);
    m_ans = std::max(m_ans, int(curr - m_left[level] + 1));
    int index{-1};
    index = curr * 2;
    solve(root->left, level + 1, index);
    solve(root->right, level + 1, index + 1);
  }
  int widthOfBinaryTree(TreeNode *root) {
    solve(root);
    return m_ans;
  }
};