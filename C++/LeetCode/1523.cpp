class Solution {
public:
    int countOdds(int low, int high) {
        
        int result = (high + 1) / 2 - (low / 2);
        
        return result;
    }
};
