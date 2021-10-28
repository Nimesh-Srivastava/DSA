class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum = 0;
        int count = 0;
        
        unordered_map<int, int> map1;
        map1[0] = 1;
        
        for(auto c : nums){
            
            sum += c;
            
            count += map1[sum - k];
            
            map1[sum]++;
        }
        
        return count;
    }
};
