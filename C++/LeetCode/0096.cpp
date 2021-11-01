class Solution {
public:
    long long int binomial(int n, int r){
        if(r > n - r)
            r = n - r;
        
        long long int ans = 1;
        
        for(int i = 0; i < r; i++){
            ans *= (n - i);
            ans /= (i + 1);
        }
        
        return ans;
    }
    
    int numTrees(int n) {
        
        long long int result = binomial(2*n, n);
        
        return result / (n + 1);
    }
};
