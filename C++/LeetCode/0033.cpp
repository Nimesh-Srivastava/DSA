//Solution 1 :-
class Solution {
public:
  int search(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = (high + low) >> 1;
      // cout << "low " << low << " high " << high << " mid " << mid << '\n';
      if (arr[mid] == target)
        return mid;
      if (arr[low] <= arr[mid]) {
        if (target >= arr[low] and target <= arr[mid])
          high = mid - 1;
        else
          low = mid + 1;
      } else {
        if (target >= arr[mid] and target <= arr[high])
          low = mid + 1;
        else
          high = mid - 1;
      }
    }
    return -1;
  }
};

//Solution 2 :-
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l = 0;
        int r = nums.size() - 1;
        
        int ans = -1;
        
        while(l <= r){
            
            int mid = l + (r - l) / 2;
            
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            
            else if(nums[mid] >= nums[l]){
                if(target >= nums[l] && target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            
            else{
                if(target > nums[mid] && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        
        return ans;
    }
};
