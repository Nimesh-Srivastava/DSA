//Solution 1 :-
class Solution {
public:
  int numberOfHours(const std::vector<int> &arr, int k) {
    int h{0};
    for (auto &val : arr) {
      h += int(std::ceil(static_cast<double>(val) / k));
    }
    return h;
  }
  int minEatingSpeed(vector<int> &piles, int h) {
    int low{1}, high{*std::max_element(piles.begin(), piles.end())};
    while (low < high) {
      int mid{low + (high - low) / 2};
      int curr{numberOfHours(piles, mid)};
      if (curr > h)
        low = mid + 1;
      else
        high = mid;
    }
    return low;
  }
};

//Solution 2 :-
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1000000000;
        
        while (left < right) {
            int mid = (left + right) / 2;
            int total = 0;
            
            for (int p : piles)
                total += (p + mid - 1) / mid;
            
            if (total > h)
                left = mid + 1;
            
            else
                right = mid;
        }
        
        return left;
    }
};
