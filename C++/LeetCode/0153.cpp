class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l = 0;
        int r = nums.size() - 1;
        
        if(!r)
            return nums[0];
        
        while(l < r){
            
            int mid = l + (r - l) / 2;
            
            if(nums[l] < nums[r])
                return nums[l];
            
            else if(nums[mid] > nums[r])
                l = mid + 1;
            
            else
                r = mid;
        }
        
        return nums[l];
    }
};
