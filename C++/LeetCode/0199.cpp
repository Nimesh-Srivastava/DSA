//Solution 1 :- (DFS)
class Solution {
public:
    void rightDfs(TreeNode* root, vector<int>& result, int depth){
        if(!root)
            return;
        
        if(depth == result.size())
            result.push_back(root -> val);
        
        rightDfs(root -> right, result, depth + 1);
        rightDfs(root -> left, result, depth + 1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        
        rightDfs(root, result, 0);
        
        return result;
    }
};


//Solution 2 :- (BFS)
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        
        if(!root)
            return result;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        TreeNode* frnt;
        
        while(!q.empty()){
            
            if(q.front()){
                
                frnt = q.front();
                
                if(frnt -> left)
                    q.push(frnt -> left);
                if(frnt -> right)
                    q.push(frnt -> right);
                
                q.pop();
            }
            
            else{
                result.push_back(frnt -> val);
                
                q.pop();
                
                if(!q.empty())
                    q.push(NULL);
            }
        }
        
        return result;
    }
};
