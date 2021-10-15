/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
        
        if(!root)
            return NULL;
        
        if(root -> val == p -> val || root -> val == q -> val)
            return root;
        
        TreeNode* l = lca(root -> left, p, q);
        TreeNode* r = lca(root -> right, p, q);
        
        if(l && r)
            return root;
        
        else if(l)
            return l;
        
        else
            return r;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root, p, q);
    }
};
