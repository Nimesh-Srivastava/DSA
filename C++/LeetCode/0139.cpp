class Solution {
public:
    int dfs(string s, set<string>& str, int pos, vector<int>& dp){
        if(pos == s.size())
            return 1;
        
        if(dp[pos] != -1)
            return dp[pos];
        
        string temp;
        
        for(int i = pos; i < s.size(); i++){
            temp += s[i];
            
            if(str.find(temp) != str.end())
                if(dfs(s, str, i + 1, dp))
                    return dp[pos] = 1;
        }
        
        return dp[pos] = 0;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        vector<int> dp(301, -1);
        set<string> str;
        
        for(auto word : wordDict)
            str.insert(word);
        
        return dfs(s, str, 0, dp);
    }
};
