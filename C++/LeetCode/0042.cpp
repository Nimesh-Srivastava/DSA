class Solution {
public:
    int trap(vector<int>& height) {
        
        int low = 0;
        int high = height.size() - 1;
        int maxL = 0;
        int maxH = 0;
        
        int sum = 0;
        
        while(low <= high){
            maxL = max(maxL, height[low]);
            maxH = max(maxH, height[high]);
            
            if(height[low] < height[high]){
                sum += maxL - height[low];
                low++;
            }
            else{
                sum += maxH - height[high];
                high--;
            }
        }
        
        return sum;
    }
};
