class Solution {
public:
    int leftDfs(TreeNode* root){
        if(!root)
            return 0;
        
        if(root -> left && !root -> left -> left && !root -> left -> right)
            return (root -> left -> val + leftDfs(root -> right));
        
        return leftDfs(root -> left) + leftDfs(root -> right);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int result = 0;
        
        result = leftDfs(root);
        
        return result;
    }
};
