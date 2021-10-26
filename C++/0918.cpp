class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int sum = 0;
        
        int sumMax = INT_MIN;
        int tMax = 0;
        
        int sumMin = INT_MAX;
        int tMin = 0;
        
        for(auto c : nums){
            
            sum += c;
            
            //calculate maximum sum
            tMax += c;
            tMax = max(tMax, c);
            sumMax = max(sumMax, tMax);
            
            //calculate minimum sum
            tMin += c;
            tMin = min(tMin, c);
            sumMin = min(sumMin, tMin);
        }
        
        if(sum == sumMin)
            return sumMax;
        else
            return max(sumMax, sum - sumMin);
    }
};
