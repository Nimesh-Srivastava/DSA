class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k <= 1)
            return 0;
        
        int prod = 1;
        int init = 0;
        
        int result = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            prod *= nums[i];
            
            while(prod >= k){
                prod /= nums[init];
                init++;
            }
            
            result += i - init + 1;
        }
        
        return result;
    }
};
