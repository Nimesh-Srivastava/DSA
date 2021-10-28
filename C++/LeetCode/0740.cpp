class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
        
        int maxVal = INT_MIN;
        
        unordered_map<int, int> map1;
        
        for(auto c : nums){
            map1[c]++;
            
            if(c > maxVal)
                maxVal = c;
        }
        
        vector<int> dp(maxVal + 1, 0);
        dp[1] = map1[1];
        
        for(int i = 2; i <= maxVal; i++)
            dp[i] = max((map1[i] * i) + dp[i-2], dp[i-1]);
        
        return dp[maxVal];
    }
};
