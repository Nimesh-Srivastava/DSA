class Solution {
public:
  void nextPermutation(vector<int> &arr) {
    int n = arr.size();
    int j = n - 1;
    while (j > 0) {
      if (arr[j] > arr[j - 1])
        break;
      j--;
    }
    if (j == 0) {
      std::sort(arr.begin(), arr.end());
      return;
    }
    int i = j - 1;
    for (j = n - 1; j > i; j--)
      if (arr[j] > arr[i])
        break;
    swap(arr[i], arr[j]);
    reverse(arr.begin() + i + 1, arr.end());
  }
};