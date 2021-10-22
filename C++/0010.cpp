class Solution {
public:    
    bool dfs(int i, int j, string &s, string &p, vector<vector<int>> &dp){
        
        //true == 1
        //false == 0
        
        if(dp[i][j] < 2)
            return dp[i][j];
        
        if(i >= s.length() && j >= p.length())
            return 1;
        
        if(j >= p.length())
            return 0;
        
        bool cond1 = i < s.length();
        bool cond2 = (s[i] == p[j] || p[j] == '.');
        
        bool check = cond1 && cond2;
        
        if((j + 1) < p.length() && p[j + 1] == '*'){
            bool t1 = dfs(i, j + 2, s, p, dp);
            
            if(check == 1){
                bool t2 = check && dfs(i + 1, j, s, p, dp);
                dp[i][j] = t1 || t2;
            }
            else
                dp[i][j] = t1;
            
            return dp[i][j];
        }
        
        if(check == 1){
            dp[i][j] = dfs(i + 1, j + 1, s, p, dp);  
            return dp[i][j];
        }
        
        dp[i][j] = 0;   // return false
        return dp[i][j];
    }
    
    bool isMatch(string s, string p) {
        
        int maxLen = max(s.length(), p.length());
        
        vector<vector<int>> dp(maxLen + 1, vector<int>(maxLen + 1, 2));
        
        return dfs(0, 0, s, p, dp);
    }
};
