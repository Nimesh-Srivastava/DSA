//Solution 1 :-
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


//Solution 2 :-
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        
        long long result = 0;
        
        unordered_map<long long, int> map1;
        
        for(int i=0; i<nums.size(); i++){
            
            long long ans = (long long)nums[i] - reverseInt(nums[i]);
            
            if(map1.find(ans) != map1.end())
                result = result + map1[ans];
            
            map1[ans]++;
        }
        
        return (result % 1000000007);
    }
    
    long long reverseInt(int num){
        
        long long result = 0;
        
        while(num){
            result = (result * 10) + (num % 10);
            num = num / 10;
        }
        
        return result;
    }
};
