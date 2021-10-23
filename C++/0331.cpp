class Solution {
public:
  bool isValidSerialization(string pre) {
    int capacity{1};
    pre += ",";
    for (int i{0}; i < int(pre.length()); i++) {
      if (pre[i] != ',')
        continue;
      capacity--;
      if (capacity < 0)
        return false;
      if (pre[i - 1] != '#')
        capacity += 2;
    }
    return capacity == 0;
  }
};