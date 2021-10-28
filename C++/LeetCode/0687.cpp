class Solution {
private:
  int m_ans{0};

public:
  int solve(TreeNode *root) {
    if (!root)
      return 0;
    int left = solve(root->left);
    int right = solve(root->right);
    if (root->left and root->left->val == root->val)
      left++;
    else
      left = 0;
    if (root->right and root->right->val == root->val)
      right++;
    else
      right = 0;
    m_ans = std::max(m_ans, left + right);
    return std::max(left, right);
  }
  int longestUnivaluePath(TreeNode *root) {
    int max = solve(root);
    return m_ans;
  }
};