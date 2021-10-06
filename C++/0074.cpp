class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int r = 0;
        
        while(target > matrix[r][col-1] && r < row - 1)
            r++;
        
        for(int i=0; i<col; i++){
            
            if(matrix[r][i] == target)
                return true;
            
        }
        
        return false;
    }
};
