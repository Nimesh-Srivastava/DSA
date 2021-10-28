class Solution {
public:
    int calArea(vector<vector<int>>& grid, int i, int j, int row, int col){
        
        //define visited cell
        grid[i][j] = -1;
        
        int area = 1;
        
        //dfs calls
        if(i - 1 >= 0 && i - 1 < row && grid[i - 1][j] == 1)    //top
            area += calArea(grid, i - 1, j, row, col);
        if(i + 1 >= 0 && i + 1 < row && grid[i + 1][j] == 1)    //bottom
            area += calArea(grid, i + 1, j, row, col);
        if(j - 1 >= 0 && j - 1 < col && grid[i][j - 1] == 1)    //left
            area += calArea(grid, i, j - 1, row, col);
        if(j + 1 >= 0 && j + 1 < col && grid[i][j + 1] == 1)    //right
            area += calArea(grid, i, j + 1, row, col);
        
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        int maxVal = 0;
        
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                if(grid[i][j] == 1)
                    maxVal = max(maxVal, calArea(grid, i, j, row, col));
        
        return maxVal;
    }
};
