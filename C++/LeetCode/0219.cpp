class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     
        unordered_map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++) {
            if (m.count(nums[i])) {
                int temp = abs(m[nums[i]] - i);
                
                if (temp <= k)
                    return true;
            }
            
            m[nums[i]] = i;
        }
        
        return false;
    }
};
