class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       
        int row = grid.size();
        int col = grid[0].size();
        
        vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
        queue<pair<int, int>> rotten;
        
        int countFresh = 0;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 1)
                    countFresh++;
                
                else if(grid[i][j] == 2)
                    rotten.push({i, j});
            }
        }
      
        int timer = -1;
        
        while(!rotten.empty()){
           int siz = rotten.size();
            
            for(int i = 0; i < siz; i++){
                auto frnt = rotten.front();
                rotten.pop();
                
                for(auto d : dir){
                    int x = frnt.first + d.first;
                    int y = frnt.second + d.second;
                    
                    if(x >= 0 && y >= 0 && x < row && y < col && grid[x][y] == 1){
                        grid[x][y] = 2;
                        rotten.push({x, y});
                        countFresh--;
                    }
                }
            }
            timer++;
        }
        
        if(countFresh > 0)
            return -1;
        
        else if(timer == -1)
            return 0;
        
        else
            return timer;
    }
};
