class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int siz = matrix.size();
        
        for(int i = 1; i < siz; i++){
            for(int j = 0; j < siz; j++){
                
                if(j == 0)
                    matrix[i][j] += min(matrix[i - 1][j], matrix[i - 1][j + 1]);
                
                else if(j == siz - 1)
                    matrix[i][j] += min(matrix[i - 1][j], matrix[i - 1][j - 1]);
                
                else{
                    int minVal = min(matrix[i - 1][j + 1], matrix[i - 1][j - 1]);
                    
                    matrix[i][j] += min(matrix[i - 1][j], minVal);
                }
            }
        }
        
        int result = INT_MAX;
        
        for(int i = 0; i < siz; i++)
            result = min(result, matrix[siz - 1][i]);
        
        return result;
    }
};
