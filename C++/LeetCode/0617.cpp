class Solution {
public:
    TreeNode* dfs(TreeNode* r1, TreeNode* r2){
        
        if(r1 && r2){
            return new TreeNode(r1 -> val + r2 -> val,
                                dfs(r1 -> left, r2 -> left),
                                dfs(r1 -> right, r2 -> right));
        }
        else{
            if(r1)
                return r1;
            else
                return r2;
        }
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return dfs(root1, root2);
    }
};
