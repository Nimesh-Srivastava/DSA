class Solution {
public:
  vector<int> searchRange(vector<int> &arr, int target) {
    int low{0}, high{int(arr.size()) - 1};
    int lb{-1};
    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] == target) {
        lb = mid;
        high = mid - 1;
      } else if (arr[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    if (lb == -1)
      return {-1, -1};
    int ub{-1};
    low = 0;
    high = int(arr.size()) - 1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] == target) {
        ub = mid;
        low = mid + 1;
      } else if (arr[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return {lb, ub};
  }
};