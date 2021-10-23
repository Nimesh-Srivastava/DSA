class Solution {
public:
  void invert(int &n, int pow) {
    int min = std::pow(2, pow);
    int max = 2 * min - 1;
    n = (min + max) - n;
  }
  vector<int> pathInZigZagTree(int label) {
    int dummy = label;
    int pow{0};
    while (dummy) {
      pow++;
      dummy >>= 1;
    }
    std::vector<int> ans{label};
    if (pow % 2 == 0)
      invert(label, pow - 1);
    while (label > 1) {
      ans.push_back(label / 2);
      label /= 2;
    }
    std::reverse(ans.begin(), ans.end());
    for (int i{1}; i < int(ans.size()) - 1; i += 2)
      invert(ans[i], i);
    return ans;
  }
};