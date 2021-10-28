// solution using dfs
class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        
        //if grid ended or water present or cell already visited, return 0
        if(i<0 || j<0 
           || i>grid.size()-1 
           || j>grid[0].size()-1 
           || !grid[i][j] 
           || grid[i][j] == 2)
            return 0;
        
        //define visited cell
        grid[i][j] = 2;
        
        //define max perimeter
        int peri = 4;
        
        //if land connected at bottom
        if(i < grid.size()-1 && grid[i + 1][j])
            peri--;
        //if land connected at right
        if(j < grid[0].size()-1 && grid[i][j + 1])
            peri--;
        //if land connected at left
        if(j > 0 && grid[i][j - 1])
            peri--;
        //if land connected at top
        if(i > 0 && grid[i - 1][j])
            peri--;
        
        //obtain dfs for left, right, top, bottom
        return peri + (dfs(grid, i, j - 1) + dfs(grid, i, j + 1) + dfs(grid, i - 1, j) + dfs(grid, i + 1, j)); 
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
       
        int result = 0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j])
                    return dfs(grid, i, j);
            }
        }
        return result;
    }
};


//Bruteforce solution
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int result = 0;
        
        for(int i=0; i<row; i++){
            
            for(int j=0; j<col; j++){
                
                if(grid[i][j]){
                    
                    // max perimeter
                    result += 4;
                    
                    // if land connected at bottom
                    if(i < row - 1 && grid[i + 1][j])
                        result--;
                    // if land connected at right
                    if(j < col - 1 && grid[i][j + 1])
                        result--;
                    // if land connected at top
                    if(i && grid[i - 1][j])
                        result--;
                    // if land connected at left
                    if(j && grid[i][j - 1])
                        result--;
                }
            }
        }
        
        return result;
    }
};
