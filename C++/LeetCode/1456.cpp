class Solution {
public:
  int maxVowels(string s, int k) {
    int n{int(s.length())}, curr{0}, max{0};
    for (int i{0}; i < n; i++) {
      char ch{s[i]};
      curr +=
          int(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
      if (i >= k) {
        char c{s[i - k]};
        curr -= int(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u');
      }
      max = std::max(max, curr);
    }
    return max;
  }
};