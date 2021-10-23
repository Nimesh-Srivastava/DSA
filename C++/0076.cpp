class Solution {
public:
  string minWindow(string &s, string &t) {
    std::unordered_map<char, int> target, f;
    for (auto &c : t)
      target[c]++;
    auto valid{[&]() {
      for (const auto & [ key, val ] : target) {
        if (val > f[key])
          return false;
      }
      return true;
    }};
    int n = s.length();
    int minStart{0}, minLength{0}, start{0}, end{0};
    while (end < n) {
      char c{s[end]};
      f[c]++;
      while (valid() and start <= end) {
        if (minLength == 0 or minLength > end - start + 1) {
          minStart = start;
          minLength = end - start + 1;
        }
        f[s[start]]--;
        start++;
      }
      end++;
    }
    return s.substr(minStart, minLength);
  }
};