class Solution {
public:
  int maxArea(vector<int> &arr) {
    int i = 0, j = int(arr.size()) - 1;
    int ans = 0;
    while (i < j) {
      int curr = min(arr[i], arr[j]) * (j - i);
      ans = max(curr, ans);
      if (arr[i] <= arr[j])
        i++;
      else if (arr[j] <= arr[i])
        j--;
      else
        break;
    }
    return ans;
  }
};