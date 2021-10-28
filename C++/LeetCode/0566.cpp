class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        if(row * col != r * c)
            return mat;
        
        vector<vector<int>> result(r, vector<int>(c, 0));
        int m = 0, n = 0;
        
        for(int i=0; i<r; i++){
            
            for(int j=0; j<c; j++){
                
                result[i][j] = mat[m][n];
                
                if(n == col - 1){
                    n = 0;
                    m++;
                }
                else
                    n++;
            }
        }
        return result;
    }
};
