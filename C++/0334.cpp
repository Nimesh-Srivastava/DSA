class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int first = INT_MAX;
        int second = INT_MAX;
        
        for(auto c : nums){
            
            if(c <= first)
                first = c;
            
            else if(c <= second)
                second = c;
            
            else
                return true;
        }
        
        return false;
    }
};
