/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* dfs(TreeNode* root, int val){
        
        if(!root)
            return NULL;
        
        if(root -> val == val)
            return root;
        
        if(root -> val < val)
            return dfs(root -> right, val);
        
        else
            return dfs(root -> left, val);
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        return dfs(root, val);
    }
};
