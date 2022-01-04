//Solution 1 (Naive approach) :-
class Solution {
public:
    vector<int> bin(int n){
        
        vector<int> num;
        
        while(n > 0){
            int temp = n % 2;
            n /= 2;
            num.push_back(temp);
        }
        
        return num;
    }
    
    int dec(vector<int>& num){
        
        int n = 0;
        
        for(int i = 0; i < num.size(); i++){
            n += num[i] * pow(2, i);
        }
        
        return n;
    }
    
    int bitwiseComplement(int n) {
        
        if(n == 0)
            return 1;
        
        vector<int> num = bin(n);
        
        for(int i = 0; i < num.size(); i++){
            if(num[i] == 0)
                num[i] = 1;
            
            else
                num[i] = 0;
        }
        
        int result = dec(num);
        
        return result;
    }
};


//Solution 2 (Optimized / Logical approach) :-
class Solution {
public:
    int bitwiseComplement(int n) {
        
        int num = 1;
        
        while(n > num)
            num = (num * 2) + 1;
        
        return num ^ n;
    }
};
