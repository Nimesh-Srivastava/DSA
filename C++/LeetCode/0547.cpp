class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<bool>& visited, int pos){
        
        visited[pos] = true;
        
        for(int i = 0; i < graph[pos].size(); i++){
            
            if(pos == i)
                continue;
            
            if(graph[pos][i] && !visited[i])
                dfs(graph, visited, i);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        vector<bool> visited(isConnected.size(), false);
        
        int result = 0;
        
        for(int i = 0; i < isConnected.size(); i++){
            
            if(!visited[i]){
                dfs(isConnected, visited, i);
                result++;
            }
        }
        
        return result;
    }
};
