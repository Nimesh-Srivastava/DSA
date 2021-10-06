//solved using dynamic programming

class Solution {
public:
    
    void fillDP(vector<vector<int>> &dp, vector<vector<int>> &mat, int n){
        
        int up, down, left, right;
        
        for(int i=0; i<n; i++){
            
            down = 0, right = 0;
            
            for(int j=0; j<n; ii++){
                
                right = mat[i][ii] ? right+1 : 0;
                dp[i][ii] = min(dp[i][ii], right);
                
                down = mat[ii][i] ? down+1 : 0;
                dp[ii][i] = min(dp[ii][i], down);
            }
        }
        
        for(int i=0; i<n; i++){
            
            up = 0, left = 0;
            
            for(int ii=n-1; ii>=0; ii--){
                
                left = mat[i][ii] ? left+1 : 0;
                dp[i][ii] = min(dp[i][ii], left);
                
                up = mat[ii][i] ? up+1 : 0;
                dp[ii][i] = min(dp[ii][i], up);
            }
        }
    }
    
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        vector<vector<int>> mat(n, vector<int>(n, 1));
        
        for(auto c : mines)
            mat[c[0]][c[1]] = 0;
        
        fillDP(dp, mat, n);
        
        int result = 0;
        
        for(int i=0; i<n; i++){
            for(int ii=0; ii<n; ii++){
                result = max(result, dp[i][ii]);
            }
        }
        
        return result;
    }
};
