class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i = 0, j = 0;
        int temp = 0;
        
        int siz = nums.size();
        
        int result = INT_MAX;
        
        while(j < siz){
            
            temp += nums[j];
            
            if(temp < target)
                j++;
            
            else{
                
                while(temp >= target){
                    result = min(result, j - i + 1);
                    
                    temp -= nums[i];
                    i++;
                }
                
                j++;
            }
        }
        
        if(result == INT_MAX)
            return 0;
        
        return result;
    }
};
