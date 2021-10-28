class Solution {
public:
  int maxSatisfied(vector<int> &c, vector<int> &g, int k) {
    int n{int(c.size())};
    int base{0}, add{0}, curr_add{0};
    for (int i{0}; i < n; i++) {
      base += !(g[i]) * c[i];
      curr_add += g[i] * c[i];
      if (i >= k) {
        curr_add -= g[i - k] * c[i - k];
      }
      add = std::max(add, curr_add);
    }
    return add + base;
  }
};