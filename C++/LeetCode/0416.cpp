class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        
        for(auto& n : nums)
            sum += n;
        
        if(sum % 2 != 0)
            return false;
        
        sum /= 2;
        
        vector<bool> dp(sum, false);
        dp[0] = true;
        
        for(auto& n : nums){
            for(int i = sum; i >= n; i--){
                dp[i] = (dp[i] || dp[i - n]);
            }
        }
        
        return dp[sum];
    }
};
