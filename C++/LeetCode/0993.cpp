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
    
    int count = 0;
    int parent = 0;
    
public:
    void depth(TreeNode* root, int val, int cnt, TreeNode* prnt){
        
        if(!root)
            return;
        
        if(root -> val == val){
            count = cnt;
            parent = prnt -> val;
            if(count == 0)
                return;
        }
        
        cnt++;
        
        depth(root -> left, val, cnt, root);
        depth(root -> right, val, cnt, root);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        int d_x = 0, p_x = 0;
        int d_y = 0, p_y = 0;
        
        depth(root, x, 0, root);
        d_x = count;
        p_x = parent;
        
        depth(root, y, 0, root);
        d_y = count;
        p_y = parent;
        
        if(d_x == d_y && p_x != p_y)
            return true;
        
        else
            return false;
    }
};
