class Solution {
public:
  vector<int> maxSlidingWindow(vector<int> &arr, int k) {
    int n{int(arr.size())};
    std::deque<int> dq(k);
    for (int i{0}; i < k; i++) {
      while (!dq.empty() and arr[i] > arr[dq.back()])
        dq.pop_back();
      dq.push_back(i);
    }
    std::vector<int> ans{dq.front()};
    for (int i{k}; i < n; i++) {
      while (!dq.empty() and dq.front() <= i - k)
        dq.pop_front();
      while (!dq.empty() and arr[i] >= arr[dq.back()])
        dq.pop_back();
      dq.push_back(i);
      ans.push_back(dq.front());
    }
    for (auto &v : ans)
      v = arr[v];
    return ans;
  }
};