class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<pair<int, int>> dist;
        
        for(int i = 0; i < points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            
            dist.push_back(make_pair(x*x + y*y, i));
        }
        
        sort(dist.begin(), dist.end());
        
        vector<vector<int>> result;
        
        int idx = 0;
        
        while(k--){
            result.push_back(points[dist[idx].second]);
            idx++;
        }
        
        return result;
    }
};
