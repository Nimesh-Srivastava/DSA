class Solution {
public:
  int numberOfSubarrays(vector<int> &arr, int k) {
    std::unordered_map<int, int> map{{0, 1}};
    int n{int(arr.size())}, sum{0}, ans{0};
    for (int i{0}; i < n; i++) {
      sum += arr[i] % 2;
      if (map.find(sum - k) != map.end())
        ans += map[sum - k];
      map[sum]++;
    }
    return ans;
  }
};