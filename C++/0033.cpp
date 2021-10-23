class Solution {
public:
  int search(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = (high + low) >> 1;
      // cout << "low " << low << " high " << high << " mid " << mid << '\n';
      if (arr[mid] == target)
        return mid;
      if (arr[low] <= arr[mid]) {
        if (target >= arr[low] and target <= arr[mid])
          high = mid - 1;
        else
          low = mid + 1;
      } else {
        if (target >= arr[mid] and target <= arr[high])
          low = mid + 1;
        else
          high = mid - 1;
      }
    }
    return -1;
  }
};