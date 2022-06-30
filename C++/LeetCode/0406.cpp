class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(begin(people), end(people), [](vector<int> p1, vector<int> p2) {
            return p1[0] > p2[0] || (p1[0] == p2[0] && p1[1] < p2[1]);
        });
        
        vector<vector<int>> result;
        
        for(auto& p : people)
            result.insert(begin(result) + p[1], p);
        
        return result;
    }
};
