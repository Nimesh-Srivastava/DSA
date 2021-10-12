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
    vector<vector<int>> result;
    
    void bfs(TreeNode* root){
        
        if(!root)
            return;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        vector<int> temp;
        
        while(!q.empty()){
            
            temp.clear();
            
            int siz = q.size();
            
            while(siz--){
                
                TreeNode* elem = q.front();
                q.pop();
                
                temp.push_back(elem -> val);
                
                if(elem -> left)
                    q.push(elem -> left);
                
                if(elem -> right)
                    q.push(elem -> right);
            }
            
            result.push_back(temp);
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        bfs(root);
        
        return result;
    }
};
