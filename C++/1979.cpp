class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int first = nums[0];
        int last = nums[nums.size() - 1];
        
        // every number has '1' as its HCF
        int result = 1;
        
        // HCF cannot be greater than the minimum number
        for(int i=2; i <= first; i++)
            if(first % i == 0 && last % i == 0 && i > result)
                result = i;
        
        return result;
    }
};
