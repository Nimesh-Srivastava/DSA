class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int ans = 0;
        int sum = 0;
        
        unordered_map<int, int> map{{0, -1}};
        
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i] == 1 ? 1 : -1;
            
            if(map.count(sum))
                ans = max(ans, i - map[sum]);
            else
                map[sum] = i;
        }
        
        return ans;
    }
};
