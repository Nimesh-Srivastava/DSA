class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> result;
        
        long temp = 1;
        
        for(int i=0; i<=rowIndex; i++){
            
            for(int j=0; j<=i; j++){
                
                if(j == 0 || i == 0)
                    temp = 1;
                
                else
                    temp = temp * (i-j+1)/j;
                
                if(i == rowIndex)
                    result.push_back(temp);
            }
        }
        
        return result;
    }
};
