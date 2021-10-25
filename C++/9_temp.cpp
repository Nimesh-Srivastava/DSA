/*
This is a rough works file. This is not a solution to any question.

It can be used however way is deemed fit.
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        
        for(int i=0; i<row; i++){
            
            int l = 0;
            int r = matrix[0].size();
            
            while(l <= r){
                
                int mid = l + (r - l)/2;
                
                if(matrix[i][mid] == target)
                    return true;
                
                else if(matrix[i][mid] < target)
                    l = mid + 1;
                
                else
                    r = mid - 1;
            }
        }
        
        return false;
    }
};
