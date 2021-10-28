// trick solution
// Time : O(1)
class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};


// solution using dynamic programming
// Time : O(n^2)
class Solution {
public:
    vector<int>dp = vector<int>(1001, -1);
    
    int solve(int n){
        if(n == 1)
            return 0;
        
        if(dp[n] != -1)
            return dp[n];
        else{
            for(int i=1; i*i <= n; i++){
                
                if(n % i == 0){
                    if(solve(n - i) == 0)
                        return dp[n] = 1;
                    
                    if((i != 1) && solve(n - (n/i)) == 0)
                        return dp[n] = 1;
                }
            }
            return dp[n] = 0;
        }
    }
    
    bool divisorGame(int n) {
        return solve(n);
    }
};
