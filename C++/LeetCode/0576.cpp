class Solution {
    
    int modVal = 1e9 + 7;
    int possMoves[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    vector<vector<vector<int>>> dp = vector<vector<vector<int>>>(50, vector<vector<int>>(50, vector<int>(51, -1)));
    
    bool checkLimits(int m, int n, int i, int j) {
        return i < 0 || i >= m || j < 0 || j >= n;
    }
    
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        bool out = checkLimits(m, n, startRow, startColumn);
        
        if (out || !maxMove)
            return out;
        
        if (dp[startRow][startColumn][maxMove] != -1)
            return dp[startRow][startColumn][maxMove];
        
        dp[startRow][startColumn][maxMove] = 0;
        
        for(int i = 0; i < 4; i++){
            dp[startRow][startColumn][maxMove] = (dp[startRow][startColumn][maxMove] + 
                findPaths(m, n, maxMove - 1, startRow + possMoves[i][0], startColumn + possMoves[i][1])) % modVal;
        }
        
        return dp[startRow][startColumn][maxMove];
    }
};
