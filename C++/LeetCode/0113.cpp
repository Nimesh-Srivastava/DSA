class Solution {
public:
    void dfs(TreeNode* root, int target, vector<int> temp, vector<vector<int>>& res){
        if(!root)
            return;
        
        if(!root -> left && !root -> right && root -> val == target){
            temp.push_back(root -> val);
            res.push_back(temp);
            return;
        }
        
        temp.push_back(root -> val);
        
        dfs(root -> left, target - root -> val, temp, res);
        dfs(root -> right, target - root -> val, temp, res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        
        dfs(root, targetSum, {}, result);
        
        return result;
    }
};
