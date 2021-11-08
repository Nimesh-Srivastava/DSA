class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int len = 1;
        int prev = 0;
        
        for(int i = 1; i < nums.size(); i++){
            int diff = nums[i] - nums[i - 1];
            
            if(diff != 0){
                if((prev * diff) <= 0)
                    len++;
                
                prev = diff;
            }
        }
        
        return len;
    }
};
