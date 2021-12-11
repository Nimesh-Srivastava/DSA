class Solution {
public:
    int mod = 1e9 + 7;
    
    int hcf(int a, int b){
        if(b == 0)
            return a;
        
        return hcf(b, a % b);
    }
    
    int lcm(int a, int b){
        return (a * b) / hcf(a, b);
    }
    
    int nthMagicalNumber(int n, int a, int b) {
        
        long long l = 1;
        long long r = 1e17;
        
        while(l < r){
            long long mid = l + (r - l)/2;
            
            long long temp = (mid / a) + (mid / b);
            temp -= (mid / lcm(a, b));
            
            if(temp < n)
                l = mid + 1;
            else
                r = mid;
        }
        
        return r % mod;
    }
};
