//Solution 1 (Naive):-
class Solution {
public:
    void dfs(TreeNode* root, vector<int>& ans){
        
        if(!root)
            return;
        
        ans.push_back(root -> val);
        
        dfs(root -> left, ans);
        dfs(root -> right, ans);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> result;
        
        dfs(root1, result);
        dfs(root2, result);
        
        sort(result.begin(), result.end());
        
        return result;
    }
};


//Solution 2 (Optimized for time using stacks):-
class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> result;
        
        stack<TreeNode*> st1, st2;
        
        while(root1 || root2 || !st1.empty() || !st2.empty()){
            
            while(root1){
                st1.push(root1);
                root1 = root1 -> left;
            }
            
            while(root2){
                st2.push(root2);
                root2 = root2 -> left;
            }
            
            if(st2.empty() || (!st1.empty() && st1.top() -> val <= st2.top() -> val)){
                root1 = st1.top();
                st1.pop();
                result.push_back(root1 -> val);
                root1 = root1 -> right;
            }
            
            else{
                root2 = st2.top();
                st2.pop();
                result.push_back(root2 -> val);
                root2 = root2 -> right;
            }
        }
        
        return result;
    }
};
