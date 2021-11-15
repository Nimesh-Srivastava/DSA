class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        //works on both C++ and C style arrays
        sort(begin(nums), end(nums));
        
        int siz = size(nums);
        
        int maxVal = 0;
        
        vector<int> dp(siz, 1);
        vector<int> prev(siz, -1);
        
        for(int i = 1; i < siz; i++){
            for(int j = 0; j < i; j++){
                
                if(nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
                
                if(dp[i] > dp[maxVal])
                    maxVal = i;
            }
        }
        
        vector<int> result;
        
        for(int cnt = maxVal; cnt >= 0; cnt = prev[cnt])
            result.push_back(nums[cnt]);
        
        return result;
    }
};
