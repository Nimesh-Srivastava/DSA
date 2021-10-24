class Solution {
public:
    void swapNum(int *a, int *b){
        *a += *b;
        *b = *a - *b;
        *a -= *b;
    }
    
    void moveZeroes(vector<int>& nums) {
        
        int siz = nums.size();
        
        int i = 0;
        int j = 1;
        
        while(i < siz && j < siz){
            
            if(nums[i] == 0){
                if(nums[j] != 0){
                    swapNum(&nums[i], &nums[j]);
                    i++;
                }
            }
            else
                i++;
            
            j++;
        }
    }
};
