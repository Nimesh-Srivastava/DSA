class Solution {
private:
  std::unordered_map<int, int> pre, post;
  std::unordered_set<int> set;

public:
  TreeNode *constructFromPrePost(vector<int> &preorder,
                                 vector<int> &postorder) {
    for (auto it{preorder.begin()}; it != preorder.end(); it++) {
      if ((it + 1) == preorder.end())
        pre[*it] = 0;
      else
        pre[*it] = *(it + 1);
    }
    for (auto it{postorder.rbegin()}; it != postorder.rend(); it++) {
      if ((it + 1) == postorder.rend())
        post[*it] = 0;
      else
        post[*it] = *(it + 1);
    }
    TreeNode *root{new TreeNode(preorder[0])};
    std::stack<TreeNode *> stk;
    stk.push(root);
    while (!stk.empty()) {
      TreeNode *curr{stk.top()};
      stk.pop();
      if (!curr)
        continue;
      int val{curr->val};
      TreeNode *left, *right;
      if (pre[val] == post[val]) {
        if (set.find(pre[val]) == set.end()) {
          if (pre[val] == 0)
            left = right = nullptr;
          else {
            left = new TreeNode(pre[val]);
            right = nullptr;
            set.insert(val);
          }
        } else {
          left = right = nullptr;
        }
      } else {
        if (set.find(pre[val]) == set.end()) {
          if (pre[val] == 0)
            left = nullptr;
          else {
            left = new TreeNode(pre[val]);
            set.insert(pre[val]);
          }
        } else
          left = nullptr;
        if (set.find(post[val]) == set.end()) {
          if (post[val] == 0)
            right = nullptr;
          else {
            right = new TreeNode(post[val]);
            set.insert(post[val]);
          }
        } else
          right = nullptr;
      }
      curr->left = left;
      curr->right = right;
      stk.push(curr->right);
      stk.push(curr->left);
    }
    return root;
  }
};