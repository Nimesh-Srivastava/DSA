class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int siz = cost.size();
        
        if(siz == 2)
            return min(cost[0], cost[1]);
        
        vector<int> dp(siz, 0);
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i < siz; i++)
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        
        return min(dp[siz - 1], dp[siz - 2]);
    }
};
