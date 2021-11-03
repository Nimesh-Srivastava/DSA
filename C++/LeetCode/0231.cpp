//Solution 1 :-
//Recursive
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        
        else if(n == 1)
            return true;
        
        else if(n % 2 != 0)
            return false;
        
        else{
            while(n > 2){
                if(n % 2 != 0)
                    return false;
                
                n /= 2;
            }
            
            return true;
        }
    }
};


//Solution 2 :-
//Bit manipulation
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        
        bool ans = n & (n - 1);
        
        if(!ans)
            return true;
        
        else
            return false;
    }
};
