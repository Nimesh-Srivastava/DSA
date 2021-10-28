class Solution {
public:
  TreeNode *build(std::vector<int> &arr, int begin, int end) {
    if (end < begin or end < 0 or begin > int(arr.size()) - 1)
      return nullptr;
    auto max = std::max_element(arr.begin() + begin, arr.begin() + end + 1);
    int index = std::distance(arr.begin(), max);
    TreeNode *curr = new TreeNode(*max);
    curr->left = build(arr, begin, index - 1);
    curr->right = build(arr, index + 1, end);
    return curr;
  }
  TreeNode *constructMaximumBinaryTree(vector<int> &arr) {
    int begin{0}, end{int(arr.size()) - 1};
    return build(arr, begin, end);
  }
};