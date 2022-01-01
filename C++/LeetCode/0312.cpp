class Solution {
public:
    
    //using matrix chain multiplication
    int sol(vector<int>& nums, int l, int r, vector<vector<int>>& dp){
        
        if(l==r)
            return 0;
        
        if(dp[l][r] != -1)
            return dp[l][r];
        
        dp[l][r] = 0;
        
        for(int k = l; k < r; k++){
            dp[l][r] = max(dp[l][r], sol(nums, l, k, dp) + sol(nums, k + 1, r, dp) + nums[l-1] * nums[k] * nums[r]);
        }
        
        return dp[l][r];
    }
    
    int maxCoins(vector<int>& nums){
        
        nums.insert(nums.begin() + 0, 1);
        
        nums.push_back(1);
        
        int siz = nums.size();
        
        vector<vector<int>> dp(siz, vector<int>(siz, -1));
        
        return sol(nums, 1, siz - 1, dp);
    }
};
