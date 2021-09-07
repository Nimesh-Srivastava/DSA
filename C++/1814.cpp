class Solution {
public:
    int countNicePairs(std::vector<int>& nums) {
        std::unordered_map<long long, int> map;
        int count{0};
        for(long long val : nums){
            std::string str = std::to_string(val);
            std::reverse(str.begin(), str.end());
            long long rev = std::stoi(str);
            val = val - rev;
            if(map.find(val) != map.end())
                count = (count + map[val]) % int(1e9+7);
            map[val]++;
        }
        return count;
    }
};
