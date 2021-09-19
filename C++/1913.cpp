// Time : O(n logn)

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int siz = nums.size();
        
        sort(nums.begin(), nums.end());
        
        return (nums[siz-2] * nums[siz-1]) - (nums[0] * nums[1]);
    }
};
