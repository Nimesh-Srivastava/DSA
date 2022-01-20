class Solution {
public:
  int numberOfHours(const std::vector<int> &arr, int k) {
    int h{0};
    for (auto &val : arr) {
      h += int(std::ceil(static_cast<double>(val) / k));
    }
    return h;
  }
  int minEatingSpeed(vector<int> &piles, int h) {
    int low{1}, high{*std::max_element(piles.begin(), piles.end())};
    while (low < high) {
      int mid{low + (high - low) / 2};
      int curr{numberOfHours(piles, mid)};
      if (curr > h)
        low = mid + 1;
      else
        high = mid;
    }
    return low;
  }
};
