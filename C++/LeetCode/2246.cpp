class Solution {
public:
    int dfs(vector<vector<int>>& children, string& str, int& res, int i) {
        int node = 0, nodeNext = 0;

        for (auto& j : children[i]) {
            int cur = dfs(children, str, res, j);
            
            if (str[i] == str[j])
                continue;

            if (cur > nodeNext)
                nodeNext = cur;

            if (nodeNext > node)
                swap(node, nodeNext);
        }
        res = max(res, node + nodeNext + 1);
        return node + 1;
    }

    int longestPath(vector<int>& parent, string s) {
        int n = s.size();
        int res = 0;

        vector<vector<int>> children(n, vector<int>());

        for (int i = 1; i < n; i++)
            children[parent[i]].push_back(i);

        dfs(children, s, res, 0);
        return res;
    }
};
