class Solution {
private:
  long long int m_ans;
  int mod = int(1e9 + 7);

public:
  void prefixSum(TreeNode *root) {
    if (!root)
      return;
    if (root->left)
      prefixSum(root->left);
    if (root->right)
      prefixSum(root->right);
    int left{root->left ? root->left->val : 0};
    int right{root->right ? root->right->val : 0};
    root->val += left + right;
  }
  void solve(TreeNode *root, int &total) {
    if (!root)
      return;
    long long int curr{long(total - root->val) * long(root->val)};
    m_ans = std::max(curr, m_ans);
    solve(root->left, total);
    solve(root->right, total);
  }
  int maxProduct(TreeNode *root) {
    prefixSum(root);
    int total{root->val};
    solve(root, total);
    return m_ans % mod;
  }
};