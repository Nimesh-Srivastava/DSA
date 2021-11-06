class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int xr = 0;
        
        for(auto& n : nums)
            xr ^= n;
        
        int val = 1;
        
        while(1){
            if((val & xr) == 0)
                val = val << 1;
            else
                break;
        }
        
        int a = 0;
        int b = 0;
        
        for(auto& n : nums){
            if((n & val) == 0)
                a ^= n;
            
            else
                b ^= n;
        }
        
        vector<int> result;
        result.push_back(b);
        result.push_back(a);
        
        return result;
    }
};
