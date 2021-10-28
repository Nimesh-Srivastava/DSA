class Solution {
public:
    void swapNum(int& a, int& b){
        a += b;
        b = a - b;
        a -= b;
    }
    
    void sortColors(vector<int>& nums) {
        
        int i = 0;
        int j = nums.size()-1;
        
        while(i < j){
            if(nums[i] > nums[j])
                swapNum(nums[i], nums[j]);
            
            i++;
            
            if(j == 1)
                break;
            
            if(i == j){
                i = 0;
                j--;
            }
        }
    }
};
