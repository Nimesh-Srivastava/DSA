class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        
        if(!root)
            return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        for(bool tf = false; q.size(); tf = !tf) {
            vector<int> vals; 
            
            for(int sz = q.size(); sz; --sz) {
                
                TreeNode* frnt = q.front();
                q.pop(); 
                
                vals.push_back(frnt -> val); 
                
                if(frnt -> left)
                    q.push(frnt->left); 
                
                if(frnt -> right)
                    q.push(frnt->right); 
            }
            if(tf)
                reverse(vals.begin(), vals.end()); 
            result.push_back(vals); 
        }
        
        return result;
    }
};
