class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
        int minVal = INT_MAX;
        
        vector<vector<int>> result;
        
        for(int i = 0; i < arr.size() - 1; i++){
            
            int temp = abs(arr[i] - arr[i + 1]);
            
            if(temp == minVal)
                result.push_back({arr[i], arr[i + 1]});
            
            else if(temp < minVal){
                minVal = temp;
                result.clear();
                result.push_back({arr[i], arr[i + 1]});
            }
        }
        
        return result;
    }
};
