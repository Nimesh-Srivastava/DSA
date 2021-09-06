class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        // a single number instead of the prefixSum array may also be used to save memory.
        std::vector<int> prefixSum{nums};
        for(int i{1}; i < int(nums.size()); i++){
            prefixSum[i] = nums[i] + prefixSum[i - 1];
        }
        //store the remainder modulo k, meaning the value, if removed, could add up to some n * k.
        for(auto &val: prefixSum)
            val = val % k;
        std::unordered_map<int, int> map;
        //check if the appropriate "remainder to be removed" exists.
        for(int i{0}; i < int(nums.size()); i++){
            if(prefixSum[i] == 0 && i > 0)
                return true;
            if(map.find(prefixSum[i]) != map.end() && i - map[prefixSum[i]] >= 2)
                return true;
            map.insert({prefixSum[i], i});
        }
        return false;
    }
};
