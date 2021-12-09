class Solution {
public:
    bool dfs(vector<int>& arr, int temp){
        if(temp < 0 
           || temp >= arr.size() 
           || arr[temp] < 0)
            return false;
        
        arr[temp] *= -1;
        
        return !arr[temp]
            || canReach(arr, temp + arr[temp])
            || canReach(arr, temp - arr[temp]);
    }
    
    bool canReach(vector<int>& arr, int start) {
        
        bool result = dfs(arr, start);
        
        return result;
    }
};
