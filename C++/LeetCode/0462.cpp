class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(begin(nums), end(nums));
        
        int siz = nums.size();
        int mid = siz / 2;
        int cnt = 0;
        
        for(int i = 0; i < siz; i++)
            cnt += abs(nums[i] - nums[mid]);
        
        return cnt;
    }
};
