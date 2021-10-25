class Solution {
public:
    int jump(vector<int>& nums) {
        
        int result = 0;
        int maxVal = INT_MIN;
        
        int step = 0;
        
        for(int i=0; i<nums.size()-1; i++){
            maxVal = max(maxVal, nums[i] + i);
            
            if(i == step){
                result++;
                step = maxVal;
            }
        }
        
        return result;
    }
};
