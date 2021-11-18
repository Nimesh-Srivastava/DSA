class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<bool> visited(nums.size() + 1, false);
        
        for(auto& n : nums)
            visited[n] = true;
        
        vector<int> result;
        
        for(int i = 1; i <= nums.size(); i++)
            if(!visited[i])
                result.push_back(i);
        
        return result;
    }
};
