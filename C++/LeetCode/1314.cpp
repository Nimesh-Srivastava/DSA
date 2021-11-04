class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        for(int i = 1; i < dp.size(); i++)
            for(int j = 1; j < dp[0].size(); j++)
                dp[i][j] = dp[i - 1][j] 
                + dp[i][j - 1] 
                + mat[i - 1][j - 1] 
                - dp[i - 1][j - 1];
        
        vector<vector<int>> result(m, vector<int>(n, 0));
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                
                int row1 = max(0, i - k) + 1;
                int col1 = max(0, j - k) + 1;
                
                int row2 = min(i + k + 1, m);
                int col2 = min(j + k + 1, n);
                
                result[i][j] = dp[row1 - 1][col1 - 1]
                    + dp[row2][col2]
                    - dp[row1 - 1][col2]
                    - dp[row2][col1 - 1];
            }
        }
        
        return result;
    }
};
