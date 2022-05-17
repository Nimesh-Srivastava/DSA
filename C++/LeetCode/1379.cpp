class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(!original)
            return NULL;
        
        if(original == target)
            return cloned;
        
        TreeNode* Lt = getTargetCopy(original -> left, cloned -> left, target);
        
        if(Lt)
            return Lt;
        
        return getTargetCopy(original -> right, cloned -> right, target);
        
    }
};
