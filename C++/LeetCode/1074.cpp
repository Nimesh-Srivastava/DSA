class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        // convert each row into prefix sum
        for(int i = 0; i < r; i++)
            for(int j = 1; j < c; j++)
                matrix[i][j] += matrix[i][j - 1];
        
        int ans = 0;
        unordered_map<int, int> m1;
        
        for(int i = 0; i < c; i++) {
            for(int j = i; j < c; j++) {
                m1.clear();
                m1[0]++;
                
                int sum = 0;
                for(int k = 0; k < r; k++) {
                    int temp = matrix[k][j];
                    
                    if(i > 0)
                        temp -= matrix[k][i - 1];
                    
                    sum += temp;
                    ans += m1[sum - target];
                    
                    m1[sum]++;
                }
            }
        }
        
        return ans;
    }
};
