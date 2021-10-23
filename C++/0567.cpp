class Solution {
public:
  bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length())
      return false;
    std::vector<int> target(26), f(26);
    int k{int(s1.length())};
    for (int i{0}; i < k; i++) {
      target[s1[i] - 'a']++;
      f[s2[i] - 'a']++;
    }
    if (f == target)
      return true;
    int n{int(s2.length())};
    for (int i{1}; i + k - 1 < n; i++) {
      f[s2[i + k - 1] - 'a']++;
      f[s2[i - 1] - 'a']--;
      if (f == target)
        return true;
    }
    return false;
  }
};