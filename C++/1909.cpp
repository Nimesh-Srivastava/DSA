class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        int count = 0, index = 0;
        
        for(int i=1; i<nums.size(); i++){
            
            if(nums[i] <= nums[i-1]){
                count++;
                index = i;
            }
            
            if(count > 1)
                return false;
        }
        
      //check for edge cases
        if(count == 0 || index == 1 || index == nums.size()-1)
            return true;
        
      //check whether nums[i] or nums[i-1] is to be removed.
      //if neither, return false, else, return true
        if(nums[index - 1] < nums[index + 1] || nums[index - 2] < nums[index])
            return true;
        else
            return false;
        
    }
};
