class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        vector<int> dp(values.size(), 0);
        
        dp[0] = values[0];
        
        int maxVal = INT_MIN;
        
        for(int i = 1; i < values.size(); i++){
            
            maxVal = max(maxVal, dp[i - 1] - 1 + values[i]);
            
            dp[i] = max(dp[i - 1] - 1, values[i]);
        }
        
        return maxVal;
    }
};
