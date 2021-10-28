class Solution {
public:
  void generate(vector<int> &arr, int k, vector<vector<int>> &perms) {
    if (k == 1)
      perms.push_back(arr);
    else {
      generate(arr, k - 1, perms);
      for (int i{0}; i < k - 1; i++) {
        if (k % 2 == 0)
          swap(arr[i], arr[k - 1]);
        else
          std::swap(arr[0], arr[k - 1]);
        generate(arr, k - 1, perms);
      }
    }
  }
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> perms;
    generate(nums, int(nums.size()), perms);
    return perms;
  }
};