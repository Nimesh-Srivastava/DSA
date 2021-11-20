//Solution 1 :-
class Solution {
public:
  int singleNonDuplicate(vector<int> &arr) {
    int n{int(arr.size())};
    int low{0}, high{n - 1};
    while (low < high) {
      int mid{(low + high) / 2};
      if ((mid == 0 and arr[mid] != arr[mid + 1]) or
          (mid == n - 1 and arr[mid - 1] != arr[mid]))
        return arr[mid];
      if (mid % 2 == 0) {
        if (arr[mid] == arr[mid + 1])
          low = mid + 2;
        else
          high = mid;
      } else {
        if (arr[mid] == arr[mid - 1])
          low = mid + 1;
        else
          high = mid;
      }
    }
    return arr[low];
  }
};

//Solution 2 :-
//(XOR sum)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sum = 0;
        
        for(auto& c : nums)
            sum = sum ^ c;
        
        return sum;
    }
};
