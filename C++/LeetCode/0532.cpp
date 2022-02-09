class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        for(auto& n : nums)
            mp[n]++;
        
        int result = 0;
        
        for(auto& m : mp){
            if(k == 0){
                if(m.second > 1)
                    result++;
            }
            
            else if(mp.find(m.first + k) != mp.end())
                result++;
        }
        
        return result;
    }
};
