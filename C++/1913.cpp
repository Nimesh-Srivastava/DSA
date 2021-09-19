// Solution 1
// Time : O(n logn)
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int siz = nums.size();
        
        sort(nums.begin(), nums.end());
        
        return (nums[siz-2] * nums[siz-1]) - (nums[0] * nums[1]);
    }
};


// Solution 2
// Time : O(n)
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int max = INT_MIN, sub_max = INT_MIN;
        int min = INT_MAX, sub_min = INT_MAX;
        
        for(auto c : nums){
            
            if(c > max){
                sub_max = max;
                max = c;
            }
            else if(c > sub_max)
                sub_max = c;
            
            if(c < min){
                sub_min = min;
                min = c;
            }
            else if(c < sub_min)
                sub_min = c;
        }
        
        return (max * sub_max) - (min * sub_min);
    }
};
