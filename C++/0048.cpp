class Solution {
public:
    void swapNum(int* a, int* b){
        *a += *b;
        *b = *a - *b;
        *a -= *b;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        
        int i = 0;
        int j = matrix.size() - 1;
        int k = 0;
        
        int count = 0;
        
        int temp = matrix.size()/2;
        
        while(temp--){
            for(int i = count; i < matrix.size()-1-count; i++){
                swapNum(&matrix[i][k], &matrix[j-k][i]);
                swapNum(&matrix[j-k][i], &matrix[j-i][j-k]);
                swapNum(&matrix[j-i][j-k], &matrix[k][j-i]);
            }
            count++;
            k++;
        }
    }
};
