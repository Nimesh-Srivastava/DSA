class Solution {
    
    int result = 0;
    int empty = 1;
    
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int pos){
        
        if(i < 0 || j < 0
          || i >= grid.size()
          || j >= grid[0].size()
           || grid[i][j] == -1)
            return;
        
        if(grid[i][j] == 2){
            if(pos == empty)
                result++;
            
            return;
        }
        
        grid[i][j] = -1;
        
        dfs(grid, i - 1, j, pos + 1);
        dfs(grid, i + 1, j, pos + 1);
        dfs(grid, i, j - 1, pos + 1);
        dfs(grid, i, j + 1, pos + 1);
        
        grid[i][j] = 0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int row = 0;
        int col = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    row = i;
                    col = j;
                }
                else if(grid[i][j] == 0)
                    empty++;
            }
        }
        
        dfs(grid, row, col, 0);
        
        return result;
    }
};
