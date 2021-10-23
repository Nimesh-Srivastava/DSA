class Solution {
public:
  int numberOfSubstrings(string s) {
    int n{int(s.length())};
    std::vector<int> f(3);
    int start{0}, end{0};
    int count{0};
    while (end < n) {
      f[s[end] - 'a']++;
      while (f[0] >= 1 and f[1] >= 1 and f[2] >= 1) {
        f[s[start] - 'a']--;
        start++;
      }
      count += start;
      end++;
    }
    return count;
  }
};