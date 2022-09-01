// Solution 1 :-
class Solution {
private:
  int m_sum = 0;

public:
  void countGood(TreeNode *root, int max = INT_MIN) {
    if (!root)
      return;
    if (max <= root->val)
      m_sum++;
    max = std::max(root->val, max);
    countGood(root->right, max);
    countGood(root->left, max);
  }
  int goodNodes(TreeNode *root) {
    countGood(root);
    return m_sum;
  }
};


// Solution 2 :-
class Solution {
public:
    int traverse(TreeNode* root, int maxVal) {
        
        if (!root)
            return 0;
        
        int goodNode = 0;
        
        if (root -> val >= maxVal) {
            goodNode++;
            maxVal = root -> val;
        }
        
        return goodNode + traverse(root -> left, maxVal) + traverse(root -> right, maxVal);
    }
    
    int goodNodes(TreeNode* root) {
        
        if (!root)
            return 0;
        
        return traverse(root, root -> val);
    }
};
