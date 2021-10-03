class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxIndex = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(maxIndex < i)
                return false;
            
            maxIndex = max(maxIndex, nums[i] + i);
        }
        
        return true;
    }
};
