class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> map1;
        unordered_map<int, int> :: iterator it;
        
        vector<int> result;
        
        for(auto c : nums1){
            it = map1.find(c);
            
            if(it != map1.end())
                it->second++;
            else
                map1.insert({c, 1});
        }
        
        for(auto c : nums2){
            it = map1.find(c);
            
            if(it != map1.end()){
                if(it->second > 0){
                    result.push_back(c);
                    it->second--;
                }
            }
            
        }
        return result;
    }
};
