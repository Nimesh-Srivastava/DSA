class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if(grid[0][0] || grid.back().back())
            return -1;
        
        int start = 1, ans = 2;
        int xMax = grid[0].size() - 1;
        int yMax = grid.size() - 1;
        
        if(!xMax && !yMax)
            return 1 - (grid[0][0] << 1);
        
        grid[0][0] = -1;
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        
        while(start){
            while(start--){
                
                auto[x, y] = q.front();
                q.pop();
                
                for(int i = max(x - 1, 0), currX = min(x + 1, xMax); i <= currX; i++){
                    
                    for(int j = max(y - 1, 0), currY = min(y + 1, yMax); j <= currY; j++){
                        
                        if(i == xMax && j == yMax)
                            return ans;
                        
                        if(!grid[j][i]){
                            grid[j][i] = -1;
                            q.push({i, j});
                        }
                    }
                }
            }
            ans++;
            start = q.size();
        }
        
        return -1;
    }
};
