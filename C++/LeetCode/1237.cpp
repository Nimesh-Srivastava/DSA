class Solution {
public:
  vector<vector<int>> findSolution(CustomFunction &customfunction, int z) {
    std::vector<std::vector<int>> ans;
    for (int i{1}, j{1000}; i <= 1000 and j >= 1;) {
      int curr = customfunction.f(i, j);
      if (curr < z)
        i++;
      else if (curr > z)
        j--;
      else {
        ans.push_back({i, j});
        i++;
        j--;
      }
    }
    return ans;
  }
};