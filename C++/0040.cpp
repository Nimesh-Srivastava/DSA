class Solution {
public:
  void backtrack(vector<int> &arr, int target, vector<vector<int>> &ans,
                 vector<int> &curr, int start = 0) {
    if (target < 0)
      return;
    if (target == 0)
      ans.push_back(curr);
    else {
      for (int i{start}; i < int(arr.size()); i++) {
        if (i > start and arr[i] == arr[i - 1])
          continue;
        curr.push_back(arr[i]);
        backtrack(arr, target - arr[i], ans, curr, i + 1);
        curr.pop_back();
      }
    }
  }
  vector<vector<int>> combinationSum2(vector<int> &arr, int target) {
    vector<vector<int>> ans;
    vector<int> curr;
    std::sort(arr.begin(), arr.end());
    backtrack(arr, target, ans, curr);
    return ans;
  }
};