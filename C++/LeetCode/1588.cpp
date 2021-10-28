class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int result = 0, n = arr.size();
        
        for(int i = 0; i < n; i++){
            
            if(i == 0 || i == n - 1){
                
                int temp = (n / 2) + (n % 2);
                
                result = result + (arr[i] * temp);
                
            }
            else{
                
                int lCount = i, rCount = n - i - 1;
                
                int lTimes = (lCount / 2) + (lCount % 2);
                int rTimes = (rCount / 2) + (rCount % 2);
                
                int count = lTimes * rTimes;
                
                result = result + (count * arr[i]);
                
                lTimes = (lCount / 2) + 1;
                rTimes = (rCount / 2) + 1;
                
                count = lTimes * rTimes;
                
                result = result + (count * arr[i]);
            }
        }
        
        return result;
    }
};
