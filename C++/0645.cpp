class Solution {
public:
    vector<int> findErrorNums(std::vector<int>& nums) {
        std::unordered_set<int> set;
        int repeated{-1};
        for(auto &val: nums){
            if(set.find(val) != set.end())
                repeated = val;
            else
                set.insert(val);
        }
        for(int i{1}; i <= int(nums.size()); i++)
            if(set.find(i) == set.end())
                return {repeated, i};
        return {-1, -1};
    }
};
