//Solution 1:-
class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
        
        vector<int> dp(nums.size(), 0);
        
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        int result = dp[1];
        
        for(int i=2; i<nums.size(); i++){
            
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
            
            result = max(result, dp[i]);
        }
        
        return result;
    }
};


//Solution 2:-
class Solution {
public:
    int rob(vector<int>& nums) {
        
        if (nums.size() == 1)
            return nums[0];
        
        int p1 = 0;
        int p2 = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            
            int temp = max(nums[i] + p2, p1);
            
            p2 = p1;
            
            p1 = temp;
        }
        
        return p1;
    }
};
