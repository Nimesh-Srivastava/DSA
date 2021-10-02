// solution using recursion
class Solution {
public:
    int fib(int n) {
        if(n < 2)
            return n;
        
        return fib(n-1) + fib(n-2);
    }
};



// solution using dynamic programming
class Solution {
public:
    int fib(int n) {
       
        if(n <= 1)
            return n;
        
        else{
            int first = 0, second = 1, sum = 0;
            
            for(int i=1; i<n; i++){
                sum = first + second;
                first = second;
                second = sum;
            }
            return sum;
        }
    }
};
