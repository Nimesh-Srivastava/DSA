class Solution {
public:
    int numTilings(int n) {
        
        if(n < 3)
            return n;
        
        int mod = 1e9 + 7;
        
        long d0 = 1, d1 = 2;
        long t0 = 1, t1 = 2;
        
        int result = 0;
        
        for(int i = 3; i <= n; i++){
            result = (d0 + d1 + 2*t0) % mod;
            int temp = (d1 + t1) % mod;
            
            d0 = d1;
            d1 = result;
            
            t0 = t1;
            t1 = temp;
        }
        
        return result;
    }
};
