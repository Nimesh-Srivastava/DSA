//Solution 1:-
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int minVal = INT_MAX;
        
        for(auto c : nums){
            minVal = min(c, minVal);
        }
        
        return minVal;
    }
};


//Solution 2:-
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size() - 1;
        
        while(left < right){
            
            int mid = left + (right - left)/2;
            
            if(nums[mid] > nums[right])
                left = mid + 1;
            
            else if(nums[mid] < nums[right])
                right = mid;
            
            else
                right--;
        }
        
        return nums[left];
    }
};
