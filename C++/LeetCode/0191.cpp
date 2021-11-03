class Solution {
public:
    int hammingWeight(uint32_t n) {
        int countBits = 0;
        
        while(n > 0){
            if((n & 1) > 0)
                countBits++;
            
            n = n >> 1;
        }
        
        return countBits;
    }
};
