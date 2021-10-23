class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int minVal = INT_MAX;
        
        for(auto c : nums){
            minVal = min(c, minVal);
        }
        
        return minVal;
    }
};
