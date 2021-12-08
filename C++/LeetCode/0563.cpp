class Solution {
    
    int tilt;
    
public:
    int dfs(TreeNode* root){
        int l = 0;
        int r = 0;
        
        if(root -> left)
            l = dfs(root -> left);
        
        if(root -> right)
            r = dfs(root -> right);
        
        tilt += abs(l - r);
        
        return l + r + root -> val;
    }
    
    int findTilt(TreeNode* root) {
        if(!root)
            return NULL;
        
        tilt = 0;
        
        (void)dfs(root);
        
        return tilt;
    }
};
