class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int num;
        
        for(auto c : nums){
            
            if(count == 0)
                num = c;
            
            if(num == c)
                count++;
            else
                count--;
        }
        
        return num;
    }
};
