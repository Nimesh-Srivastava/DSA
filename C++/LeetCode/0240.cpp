class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int maxRow = matrix.size();
        int maxCol = matrix[0].size();
        
        int r = 0;
        int c = maxCol - 1;
        
        while(r < maxRow && c >= 0){
            
            if(matrix[r][c] == target)
                return true;
            
            else if(matrix[r][c] < target)
                r++;
            
            else
                c--;
        }
        
        return false;
    }
};
