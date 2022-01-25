class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int siz = arr.size();
        
        int l = 0;
        int r = siz - 1;
        
        while(l + 1 < siz && arr[l] < arr[l + 1])
            l++;
        
        while(r > 0 && arr[r] < arr[r - 1])
            r--;
        
        return (l == r) && (l > 0) && (r < siz - 1);
    }
};
