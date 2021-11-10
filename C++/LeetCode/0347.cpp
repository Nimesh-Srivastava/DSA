class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;
        
        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        
        //store similar frequency elements
        vector<vector<int>> tabl(nums.size() + 1);
        
        for(auto& [a, b] : freq)
            tabl[b].push_back(a);
        
        vector<int> result;
        
        for(int i = nums.size(); i > 0; i--){
            
            if(result.size() < k)
                for(auto& c : tabl[i])
                    result.push_back(c);
            
            else
                break;
        }
        
        return result;
    }
};
