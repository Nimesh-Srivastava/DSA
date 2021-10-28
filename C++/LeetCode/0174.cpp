// solved using dynamic programming

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
        int row = dungeon.size();
        int col = dungeon[0].size();
        
        vector<vector<int>> dp(row, vector<int>(col));
        
        // calculation for last cell
        if(dungeon[row - 1][col - 1] > 0)
            dp[row - 1][col - 1] = 1;
        
        else
            dp[row - 1][col - 1] = 1 - dungeon[row - 1][col - 1];
        
        
        // calculation for last column
        for(int i = row - 2; i >= 0; i--)
            dp[i][col - 1] = max(dp[i + 1][col - 1] - dungeon[i][col - 1], 1);
        
        
        // calcultion for last row
        for(int i = col - 2; i >= 0; i--)
            dp[row - 1][i] = max(dp[row - 1][i + 1] - dungeon[row - 1][i], 1);
        
        
        // calcultion for remaining cells row wise, iterating from back
        for(int i = row - 2; i >= 0; i--)
            for(int j = col - 2; j >= 0; j--)
                dp[i][j] = max(min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j], 1);
        
        
        // answer is the first cell of the dp
        return dp[0][0];
    }
};
