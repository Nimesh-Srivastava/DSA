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
