class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int max{INT_MIN}, sMax{INT_MIN}, tMax{INT_MIN};
        for(int i{0}; i < int(arr.size()); i++){
            if(arr[i] > max){
                tMax = sMax;
                sMax = max;
                max = arr[i];
            }
            else if(arr[i] > sMax and arr[i] < max){
                tMax = sMax;
                sMax = arr[i];
            }
            else if(arr[i] > tMax and arr[i] < sMax)
                tMax = arr[i];
        }
        //these three checks preserve space while maintaining O(n) time complexity.
        //one could also simply use long int sentinels, but that would take extra space when it's needed for only 2 border cases.
        if(int(arr.size()) <= 2 or (tMax == INT_MIN and std::find(arr.begin(), arr.end(), INT_MIN) == arr.end()) or tMax == sMax)
            return max;
        else return tMax;
    }
};
