//Solution 1 :-
class Solution {
public:
  void generate(vector<int> &arr, int k, vector<vector<int>> &perms) {
    if (k == 1)
      perms.push_back(arr);
    else {
      generate(arr, k - 1, perms);
      for (int i{0}; i < k - 1; i++) {
        if (k % 2 == 0)
          swap(arr[i], arr[k - 1]);
        else
          std::swap(arr[0], arr[k - 1]);
        generate(arr, k - 1, perms);
      }
    }
  }
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> perms;
    generate(nums, int(nums.size()), perms);
    return perms;
  }
};


//Solution 2 :-
class Solution {
    
    vector<vector<int>> permutations;
    
public:
    void backtrack(vector<int>& nums, int pos){
        
        if(pos == nums.size()){
            permutations.push_back(nums);
            return;
        }
        
        for(int i = pos; i < nums.size(); i++){
            swap(nums[i], nums[pos]);
            
            backtrack(nums, pos + 1);
            
            swap(nums[i], nums[pos]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        backtrack(nums, 0);
        
        return permutations;
    }
};
