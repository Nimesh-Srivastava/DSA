class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));
        
        int result = 0;
        
        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= col; j++){
                
                if(matrix[i - 1][j - 1] == '0')
                    dp[i][j] = 0;
                
                else{
                    int minVal = min(dp[i][j - 1], dp[i - 1][j - 1]);
                    
                    dp[i][j] = min(dp[i - 1][j], minVal) + 1;
                }
                
                result = max(result, dp[i][j]);
            }
        }
        
        return result * result;
    }
};
