class Solution {
public:
    int traverse(vector<int>& v){
        
        vector<int> dp(v.size(), -1);
        
        dp[0] = v[0];
        dp[1] = max(v[0], v[1]);
        
        for(int i = 2; i < v.size(); i++)
            dp[i] = max(v[i] + dp[i-2], dp[i-1]);
        
        return dp[v.size() - 1];
    }
    
    int rob(vector<int>& nums) {
        
        int siz = nums.size();
        
        if(siz == 1)
            return nums[0];
        
        else if(siz == 2)
            return max(nums[0], nums[1]);
        
        vector<int> sequence1(nums.begin(), nums.end()-1);  //select first house
        vector<int> sequence2(nums.begin()+1, nums.end());  //select last house
        
        return max(traverse(sequence1), traverse(sequence2));
    }
};
