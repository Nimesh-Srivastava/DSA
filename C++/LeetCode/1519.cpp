class Solution {
public:
    vector<int> dfs(vector<vector<int>>& graph, string& labels, vector<int>& visited, int val, vector<int>& ans) {
        vector<int> temp(26);
        visited[val] = 1;
		
        for(auto& node : graph[val]) {
            if(!visited[node]) {
                vector<int> child = dfs(graph, labels, visited, node, ans);
                temp[labels[node] - 'a']++;
				
                for(int i = 0; i < 26; i++)
                    temp[i] += child[i];
            }
        }

        ans[val] += temp[labels[val] - 'a'] + 1;
        return temp;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> graph(n);

        for(int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> visited(n), ans(n), temp(26);

        dfs(graph, labels, visited, 0, ans);

        return ans;
    }
};
