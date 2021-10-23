class Solution {
public:
  void backtrack(vector<int> &arr, vector<vector<int>> &ans, vector<int> curr,
                 int start = 0) {
    ans.push_back(vector<int>(curr));
    for (int i{start}; i < arr.size(); i++) {
      if (i > start and arr[i] == arr[i - 1])
        continue;
      curr.push_back(arr[i]);
      backtrack(arr, ans, curr, i + 1);
      curr.pop_back();
    }
  }
  vector<vector<int>> subsetsWithDup(vector<int> &arr) {
    vector<vector<int>> ans;
    vector<int> curr;
    sort(arr.begin(), arr.end());
    backtrack(arr, ans, curr);
    return ans;
  }
};