class Solution {
public:
    int climbStairs(int n) {
        
        if(n <= 2)
            return n;
        
        int first = 1, second = 2, result = 0;
        
        for(int i = 3; i <= n; i++){
            result = first + second;
            first = second;
            second = result;
        }
        
        return result;
    }
};
