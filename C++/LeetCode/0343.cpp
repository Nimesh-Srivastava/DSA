//Solution 1 :- (Mathematical)
class Solution {
public:
    //The idea is to break the number into as many EQUAL parts as possible
    int calc(int& n, int& k){
        
        int div = n / k;
        int rem = n % k;
        
        int prod = pow(div, k - rem) * pow(div + 1, rem);
        
        return prod;
    }
    
    int integerBreak(int n) {
        
        int maxProd = 0;
        
        for(int i = 2; i <= n; i++){
            int temp = calc(n, i);
            
            maxProd = max(maxProd, temp);
        }
        
        return maxProd;
    }
};


//Solution 2 :- (Dynamic programming)
class Solution {
public:
    int calc(int n, vector<int>& dp){
        if(n <= 2)
            return 1;
        
        if(dp[n] != -1)
            return dp[n];
        
        int maxProd = 0;
        
        for(int i = 1; i <= n; i++)
            maxProd = max(maxProd, i * calc(n - i, dp));
        
        dp[n] = maxProd;
        
        return dp[n];
    }
    
    int integerBreak(int n) {
        
        if(n == 2)
            return 1;
        
        else if(n == 3)
            return 2;
        
        else{
            vector<int> dp(60, -1);
            
            return calc(n, dp);
        }
    }
};
