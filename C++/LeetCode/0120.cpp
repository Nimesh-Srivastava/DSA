class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        auto lastRow = triangle.back();
        
        vector<int> dp(lastRow);
        
        for(int i = triangle.size() - 2; i >= 0; i--)
            for(int j = 0; j < triangle[i].size(); j++)
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
        
        return dp[0];
    }
};
