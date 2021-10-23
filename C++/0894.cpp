class Solution {
private:
  std::unordered_map<int, std::vector<TreeNode *>> cache;

public:
  vector<TreeNode *> allPossibleFBT(int n) {
    if (cache.find(n) == cache.end()) {
      std::vector<TreeNode *> ans;
      if (n == 1)
        ans.push_back(new TreeNode(0));
      for (int i{1}; i <= n - 2; i += 2) {
        std::vector<TreeNode *> left{allPossibleFBT(i)};
        std::vector<TreeNode *> right{allPossibleFBT(n - 1 - i)};
        for (auto &n1 : left)
          for (auto &n2 : right)
            ans.push_back(new TreeNode(0, n1, n2));
      }
      cache[n] = ans;
    }
    return cache[n];
  }
};