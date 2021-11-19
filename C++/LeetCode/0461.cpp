class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int temp = x ^ y;
        
        int ans = 0;
        
        while(temp){
            ans += temp % 2;
            temp = temp >> 1;
        }
        
        return ans;
    }
};
