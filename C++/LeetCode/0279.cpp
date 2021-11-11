//Lagrange's 4 square theorem solution
//Fastest possible solution
class Solution {
public:
    int sq_check(int num){
        
        int sq_rt = (int)sqrt(num);
        
        if(sq_rt * sq_rt == num)
            return 1;
        
        else
            return 0;
    }
    
    int numSquares(int n) {
        
        //if n is perfect square
        if(sq_check(n))
            return 1;
        
        int count = 0;
        
        //check whether n satisfies 4^a (8k + 7) equation
        //obtain (8k + 7) value
        while(!(n % 4))
            n /= 4;
        
        //if n is of the form 4^a (8k + 7), 4 squares exist
        if(n % 8 == 7)
            return 4;
        
        //if n is sum of 2 squares
        for(int i = 1; i*i <= n; i++)
            if(sq_check(n - i*i))
                return 2;
        
        //otherwise
        return 3;
    }
};



//DP solution
class Solution {
public:
    int numSquares(int n) {
        
        int dp[10001] = {0};
        
        for(int i = 1; i <= n; i++){
            
            int min_val = INT_MAX;
            
            for(int j = 1; j*j <= i; j++){
                min_val = min(min_val, dp[i - (j*j)]);
                
                dp[i] = 1 + min_val;
            }
        }
        
        return dp[n];
    }
};
