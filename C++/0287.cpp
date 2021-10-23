class Solution {
public:
  int findDuplicate(vector<int> &arr) {
    std::unordered_set<int> set;
    for (auto val : arr) {
      if (set.find(val) != set.end())
        return val;
      else
        set.insert(val);
    }
    return -1;
  }
};