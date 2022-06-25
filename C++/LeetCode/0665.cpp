class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        bool flag = false;
        int prev = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < prev) {
                if(flag)
                    return false;
                
                flag = true;
                
                if(i - 2 >= 0 && nums[i-2] > nums[i])
                    continue;
            }
            prev = nums[i];
        }
        
        return true;
    }
};
