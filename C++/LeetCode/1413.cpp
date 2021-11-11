class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minVal = 0;
        int sum = 0;
        
        for(auto& n : nums){
            sum += n;
            minVal = min(minVal, sum);
        }
        
        return (-minVal) + 1;
    }
};
