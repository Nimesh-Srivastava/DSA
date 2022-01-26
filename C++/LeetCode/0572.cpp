class Solution {
public:
    bool compTree(TreeNode* r1, TreeNode* r2){
        
        if(!r1 && !r2)
            return true;
        
        if(!r1 || !r2)
            return false;
        
        if(r1 -> val == r2 -> val)
            return compTree(r1 -> left, r2 -> left) && compTree(r1 -> right, r2 -> right);
        
        else
            return false;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(!root)
            return false;
        
        else if(compTree(root, subRoot))
            return true;
        
        else
            return isSubtree(root -> left, subRoot) || isSubtree(root -> right, subRoot);
    }
};
