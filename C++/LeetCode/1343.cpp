class Solution {
public:
  int numOfSubarrays(vector<int> &arr, int k, int target) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int sum{0};
    int n{int(arr.size())};
    for (int i{0}; i < k; i++) {
      sum += arr[i];
    }
    int count{0};
    if (sum / k >= target)
      count++;
    for (int i{1}; i + k - 1 < n; i++) {
      sum += arr[i + k - 1];
      sum -= arr[i - 1];
      if (sum / k >= target)
        count++;
    }
    return count;
  }
};