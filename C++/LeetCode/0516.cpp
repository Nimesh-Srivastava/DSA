class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        int siz = s.length();
        
        vector<vector<int>> dp(siz, vector<int>(siz, 0));
        
        for(int i = siz - 1; i >= 0; i--){
            dp[i][i] = 1;
            
            for(int j = i + 1; j < siz; j++){
                if(s[i] == s[j])
                    dp[i][j] = 2 + dp[i + 1][j - 1];
                
                else
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
        
        return dp[0][siz - 1];
    }
};
