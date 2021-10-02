// solution using dynamic programming

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> result(n + 1);
        
        for(int i=0; i<=n; i++){
            
            result[i] = result[i/2];
            
            if(i % 2 != 0)
                result[i] += 1;
        }
        
        return result;
    }
};
