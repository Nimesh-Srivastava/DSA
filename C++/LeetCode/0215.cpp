class Solution {
public:
  int findKthLargest(vector<int> &nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> q(
        nums.begin(), nums.begin() + k);
    for (int i{k}; i < int(nums.size()); i++) {
      if (nums[i] > q.top()) {
        q.pop();
        q.push(nums[i]);
      }
    }
    std::vector<int> ans;
    while (!q.empty()) {
      ans.push_back(q.top());
      q.pop();
    }
    std::reverse(ans.begin(), ans.end());
    return ans[k - 1];
  }
};