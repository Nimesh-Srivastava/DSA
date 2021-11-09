class Solution {
    
    vector<bool> visited;
    
public:
    void dfs(vector<vector<int>>& rooms, int pos){
        visited[pos] = true;
        
        for(auto& r : rooms[pos])
            if(!visited[r])
                dfs(rooms, r);
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        visited = vector<bool>(rooms.size(), false);
        
        dfs(rooms, 0);
        
        for(int i = 0; i < rooms.size(); i++)
            if(!visited[i])
                return false;
        
        return true;
    }
};
