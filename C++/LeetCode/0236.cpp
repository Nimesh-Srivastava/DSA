class Solution {
public:
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL || root == p || root == q)
            return root;
        
        TreeNode* left = lca(root -> left, p, q);
        TreeNode* right = lca(root -> right, p, q);
        
        if(!left)
            return right;
        
        else if(!right)
            return left;
        
        else
            return root;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root, p, q);
    }
};
