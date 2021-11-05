class Solution {
public:
    int arrangeCoins(int n) {
        
        long long int left = 0;
        long long int right = n;
        
        while(left <= right){
            
            long long int mid = left + (right - left)/2;
            
            long long int temp = mid * (mid + 1)/2;
            
            if(temp == n)
                return mid;
            
            if(temp <= n)
                left = mid + 1;
            
            else
                right = mid - 1;
        }
        
        return left - 1;
    }
};
