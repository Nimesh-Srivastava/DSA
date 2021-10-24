class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        
        int num = 1;
        
        int r1 = 0;
        int r2 = n-1;
        int c1 = 0;
        int c2 = n-1;
        
        while(r1 <= r2 && c1 <= c2){
            
            for(int j = c1; j <= c2; j++){
                matrix[r1][j] = num;
                num++;
            }
            r1++;
            
            for(int i = r1; i <= r2; i++){
                matrix[i][c2] = num;
                num++;
            }
            c2--;
            
            for(int j = c2; j >= c1; j--){
                matrix[r2][j] = num;
                num++;
            }
            r2--;
            
            for(int i = r2; i >= r1; i--){
                matrix[i][c1] = num;
                num++;
            }
            c1++;
        }
        
        return matrix;
    }
};
