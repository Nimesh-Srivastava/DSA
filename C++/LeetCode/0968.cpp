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
    
    int cams;
    
    int dfs(TreeNode* root) {
        
        if (!root)
            return 2;
        
        int l = dfs(root -> left);
        int r = dfs(root -> right);
        
        if (l == 0 || r == 0) {
            cams++;
            return 1;
        }
        
        if (l == 1 || r == 1)
            return 2;
        
        else
            return 0;
    }
    
public:
    int minCameraCover(TreeNode* root) {
        
        cams = 0;
        
        int check = dfs(root);
        
        if (check == 0)
            return cams + 1;
        
        else
            return cams;
    }
};
