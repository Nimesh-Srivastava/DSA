class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1{0};
        for(auto &val: aliceSizes)
            sum1+=val;
        int sum2{0};
        for(auto &val: bobSizes)
            sum2+=val;
        int target{(sum1 + sum2) / 2};
        unordered_set<int> set;
        for(auto &val: bobSizes){
            set.insert(val);
        }
        for(auto &val: aliceSizes){
            if(set.find(target - sum1 + val) != set.end())
                return {val, target - sum1 + val};
        }
        return {-1, -1};
    }
};
