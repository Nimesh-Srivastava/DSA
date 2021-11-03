class Solution {
public:
    void getSum(TreeNode* root, int val, int& sum){
        if(!root)
            return;
        
        val = val * 10 + (root -> val);
        
        if(!root -> left && !root -> right)
            sum += val;
        
        getSum(root -> left, val, sum);
        getSum(root -> right, val, sum);
    }
    
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        
        int sum = 0;
        getSum(root, 0, sum);
        
        return sum;
    }
};
