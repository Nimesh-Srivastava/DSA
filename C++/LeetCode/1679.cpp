class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;
        
        while(i < j) {
            int sum = nums[i] + nums[j];
            
            if(sum == k) {
                i += 1;
                j -= 1;
                ans += 1;
            }
            else if(sum < k)
                i += 1;
            else
                j -= 1;
        }
        return ans;
    }
};
