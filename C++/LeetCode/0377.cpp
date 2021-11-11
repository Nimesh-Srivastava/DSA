class Solution {
public:
    int recur(vector<int>& nums, int target, vector<int>& dp){
        if(target < 0)
            return 0;
        
        if(dp[target] != -1)
            return dp[target];
        
        int sum = 0;
        
        for(auto& n : nums)
            sum += recur(nums, target - n, dp);
        
        dp[target] = sum;
        
        return dp[target];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int>dp(1001, -1);
        dp[0] = 1;
        
        return recur(nums, target, dp);
    }
};
