class Solution {
public:
    void dfs(TreeNode* root, vector<int>& nums){
        if(!root)
            return;
        
        nums.push_back(root -> val);
        
        dfs(root -> left, nums);
        dfs(root -> right, nums);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> nums;
        
        dfs(root, nums);
        
        sort(nums.begin(), nums.end());
        
        return nums[k - 1];
    }
};
