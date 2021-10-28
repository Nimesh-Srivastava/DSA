class Solution {
public:
  int getFreq(std::string &s) {
    char c = *std::min_element(s.begin(), s.end());
    int f{0};
    for (auto ch : s)
      if (ch == c)
        f++;
    return f;
  }
  vector<int> numSmallerByFrequency(vector<string> &queries,
                                    vector<string> &words) {
    std::vector<int> freq;
    for (auto word : words)
      freq.push_back(getFreq(word));
    std::sort(freq.begin(), freq.end());
    std::vector<int> ans;
    for (auto query : queries) {
      int f{getFreq(query)};
      auto it = std::upper_bound(freq.begin(), freq.end(), f);
      int i{int(words.size()) - int(std::distance(freq.begin(), it))};
      ans.push_back(i);
    }
    return ans;
  }
};