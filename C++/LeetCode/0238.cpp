class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int siz = nums.size();
        
        int left = 1, right = 1;
        
        vector<int> result(siz, 1);
        
        for(int i = 0; i < siz; i++){
            
            result[i] = result[i] * left;
            left = left * nums[i];
            
            result[siz - 1 - i] = result[siz - 1 - i] * right;
            right = right * nums[siz - 1 - i];
        }
        
        return result;
    }
};
