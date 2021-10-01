class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0)
            return false;
        
        vector<int> num;
        
        while(x != 0){
            num.push_back(x % 10);
            x /= 10;
        }
        
        for(int i=0; i<num.size()/2; i++){
            if(num[i] != num[num.size() - 1 - i])
                return false;
        }
        
        return true;
    }
};
