class Solution {
public:
  int shipWithinDays(vector<int> &weights, int days) {
    int low{*std::max_element(weights.begin(), weights.end())},
        high{std::reduce(weights.begin(), weights.end(), 0)};
    while (low < high) {
      int mid = low + (high - low) / 2;
      int count{1}, sum{weights[0]};
      for (int i{1}; i < int(weights.size()); i++) {
        if (weights[i] > mid) {
          count = days + 1;
          break;
        }
        sum += weights[i];
        if (sum > mid) {
          sum = weights[i];
          count++;
        }
      }
      if (count > days)
        low = mid + 1;
      else
        high = mid;
    }
    return low;
  }
};