class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int siz = nums.size();
        
        vector<int> result(siz, 0);
        
        int point1 = 0;
        int point2 = siz - 1;
        
        int endPoint = point2;
        
        while(point1 <= point2){
            
            if(abs(nums[point1]) > abs(nums[point2])){
                result[endPoint] = nums[point1] * nums[point1];
                point1++;
            }
            else{
                result[endPoint] = nums[point2] * nums[point2];
                point2--;
            }
            
            endPoint--;
        }
        
        return result;
    }
};
