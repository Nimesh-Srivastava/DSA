class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
        int pProd = 0;
        int nProd = 0;
        
        int maxVal = 0;
        
        if(nums[0] > 0){
            pProd++;
            maxVal++;
        }
        
        else if(nums[0] < 0)
            nProd++;
        
        for(int i = 1; i < nums.size(); i++){
            
            if(nums[i] > 0){
                if(nProd != 0)
                    nProd++;
                
                pProd++;
            }
            
            else if(nums[i] < 0){
                int temp;
                
                if(nProd == 0)
                    temp = 0;
                else
                    temp = nProd + 1;
                
                nProd = pProd + 1;
                pProd = temp;
            }
            
            else{
                pProd = 0;
                nProd = 0;
            }
            
            maxVal = max(maxVal, pProd);
        }
        
        return maxVal;
    }
};
