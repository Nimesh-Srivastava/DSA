//Solution using sort()
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> result;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size() - 1; i++){
            if(nums[i] == nums[i+1])
                result.push_back(nums[i]);
        }
        
        return result;
    }
};


//Solution using hash map
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_set<int> map1;
        
        vector<int> result;
        
        for(int i=0; i<nums.size(); i++){
            
            if(map1.find(nums[i]) == map1.end())
                map1.insert(nums[i]);
            
            else
                result.push_back(nums[i]);
        }
        
        return result;
    }
};


//Solution using logic
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> result;
        
        for(auto c : nums){
            
            int i = abs(c) - 1;
            
            if(nums[i] < 0)
                result.push_back(i + 1);
            
            else
                nums[i] *= -1;
        }
        
        return result;
    }
};
