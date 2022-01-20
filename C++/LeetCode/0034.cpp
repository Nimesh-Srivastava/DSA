//Solution 1 :-
class Solution {
public:
  vector<int> searchRange(vector<int> &arr, int target) {
    int low{0}, high{int(arr.size()) - 1};
    int lb{-1};
    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] == target) {
        lb = mid;
        high = mid - 1;
      } else if (arr[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    if (lb == -1)
      return {-1, -1};
    int ub{-1};
    low = 0;
    high = int(arr.size()) - 1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] == target) {
        ub = mid;
        low = mid + 1;
      } else if (arr[mid] > target) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return {lb, ub};
  }
};

//Solution 2 :-
class Solution {
public:
    int bSearch(vector<int>& nums, int target, string pos){
        int l = 0;
        int r = nums.size() - 1;
        
        int ans = -1;
        
        while(l <= r){
            
            int mid = l + (r - l) / 2;
            
            if(nums[mid] == target){
                ans = mid;
                
                if(pos == "one")
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            
            else if(nums[mid] > target)
                r = mid - 1;
            
            else
                l = mid + 1;
        }
        
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        return {bSearch(nums, target, "one"), bSearch(nums, target, "two")};   
    }
};
