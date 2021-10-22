class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int result = 0;
        
        for(auto c : nums)
            result ^= c;
        
        return result;
    }
};
