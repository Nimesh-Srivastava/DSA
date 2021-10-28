class Solution {
public:
  string simplifyPath(string path) {
    std::deque<std::string> stk;
    std::stringstream ss(path);
    std::string curr{};
    while (std::getline(ss, curr, '/')) {
      if (curr == "." or int(curr.length()) == 0)
        continue;
      if (curr == "..") {
        if (!stk.empty())
          stk.pop_back();
        else
          continue;
      } else
        stk.push_back(curr);
    }
    if (stk.empty())
      return "/";
    std::string ans;
    while (!stk.empty()) {
      ans += "/" + stk.front();
      stk.pop_front();
    }
    return ans;
  }
};