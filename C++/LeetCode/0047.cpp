class Solution {
public:
  void backtrack(vector<int> &arr, vector<vector<int>> &ans, vector<int> &curr,
                 vector<bool> &used) {
    if (curr.size() == arr.size())
      ans.push_back(curr);
    else {
      for (int i = 0; i < arr.size(); i++) {
        if (used[i] or i > 0 and arr[i] == arr[i - 1] and !used[i - 1])
          continue;
        curr.push_back(arr[i]);
        used[i] = true;
        backtrack(arr, ans, curr, used);
        curr.pop_back();
        used[i] = false;
      }
    }
  }
  vector<vector<int>> permuteUnique(vector<int> &arr) {
    vector<vector<int>> ans;
    vector<int> curr;
    vector<bool> used(arr.size(), false);
    sort(arr.begin(), arr.end());
    backtrack(arr, ans, curr, used);
    return ans;
  }
};