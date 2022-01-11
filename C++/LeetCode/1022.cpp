class Solution {
public:
    int dfs(TreeNode* root, int sum){
        
        if(!root)
            return 0;
        
        sum = (sum * 2) + root -> val;
        
        if(!root -> left && !root -> right)
            return sum;
        
        return dfs(root -> left, sum) + dfs(root -> right, sum);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};
