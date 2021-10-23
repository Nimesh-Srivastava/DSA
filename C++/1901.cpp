class Solution {
public:
  vector<int> findPeakGrid(vector<vector<int>> &mat) {
    int low{0}, high{int(mat[0].size())};
    while (low < high) {
      int mid = (low + high) / 2;
      int max{-1}, maxJ{-1}, maxI{-1};
      for (int i{0}; i < int(mat.size()); i++) {
        if (mid - 1 >= 0 and mat[i][mid - 1] > max) {
          max = mat[i][mid - 1];
          maxJ = mid - 1;
          maxI = i;
        }
        if (mat[i][mid] > max) {
          max = mat[i][mid];
          maxJ = mid;
          maxI = i;
        }
        if (mid + 1 < int(mat[0].size()) and mat[i][mid + 1] > max) {
          max = mat[i][mid + 1];
          maxJ = mid + 1;
          maxI = i;
        }
      }
      if (maxJ == mid)
        return {maxI, maxJ};
      if (maxJ < mid)
        high = mid;
      else if (maxJ > mid)
        low = mid;
    }
    return {-1, -1};
  }
};