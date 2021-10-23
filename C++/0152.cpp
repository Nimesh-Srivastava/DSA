class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int n = static_cast<int>(nums.size());
    int curr_max = nums[0];
    int curr_min = nums[0];
    int product = nums[0];
    for (int j = 1; j < n; j++) {
      int prev_max = curr_max;
      curr_max = max(max(curr_max * nums[j], curr_min * nums[j]), nums[j]);
      curr_min = min(min(prev_max * nums[j], curr_min * nums[j]), nums[j]);
      if (curr_max > product)
        product = curr_max;
    }
    return product;
  }
};