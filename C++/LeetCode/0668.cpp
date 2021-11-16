class Solution {
public:
    bool countNums(int n, int m, int k, int num){
        int temp = 0;
        
        for(int i = 1; i <= m; i++)
            temp += min(n, num / i);
        
        return temp >= k;
    }
    
    int findKthNumber(int m, int n, int k) {
        int left = 0;
        int right = m * n;
        
        while(left < right){
            int mid = left + (right - left) / 2;
            
            if(countNums(n, m, k, mid))
                right = mid;
            
            else
                left = mid + 1;
        }
        
        return left;
    }
};
