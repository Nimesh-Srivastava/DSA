class Solution {
public:
  vector<int> deckRevealedIncreasing(vector<int> &arr) {
    std::sort(arr.begin(), arr.end());
    std::deque<int> deck;
    deck.push_back(arr.back());
    arr.pop_back();
    while (!arr.empty()) {
      int revBack{deck.back()};
      deck.pop_back();
      deck.push_front(revBack);
      deck.push_front(arr.back());
      arr.pop_back();
    }
    for (auto &v : deck)
      arr.push_back(v);
    return arr;
  }
};