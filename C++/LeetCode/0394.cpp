class Solution {
public:
  std::string decode(std::string &s, int &n, int &i, int times = 1) {
    std::string decoded{}, res{};
    while (i < n) {
      char ch = s[i];
      if (int(ch - '0') >= 0 and int(ch - '0') <= 9) {
        std::string val{};
        while (s[i] != '[') {
          val += s[i];
          i++;
        }
        decoded += decode(s, n, ++i, std::stoi(val));
      } else {
        if (s[i] != ']') {
          decoded += s[i++];
        } else {
          i++;
          break;
        }
      }
    }
    while (times--) {
      res += decoded;
    }
    return res;
  }
  string decodeString(string s) {
    int i{0}, n{int(s.length())};
    std::string ans{decode(s, n, i)};
    return ans;
  }
};