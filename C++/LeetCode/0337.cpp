struct Robbing{
    int robbed;
    int skipped;
};

class Solution {
    
    Robbing dfs(TreeNode* root){
        if(root == NULL)
            return Robbing{0, 0};
        
        Robbing rLeft = dfs(root -> left);
        Robbing rRight = dfs(root -> right);
        
        int robNode = root -> val + rLeft.skipped + rRight.skipped;
        int skipNode = max(rLeft.robbed, rLeft.skipped) + max(rRight.robbed, rRight.skipped);
        
        return Robbing{robNode, skipNode};
    }
    
public:
    int rob(TreeNode* root) {
        Robbing temp = dfs(root);
        
        return max(temp.robbed, temp.skipped);
    }
};
