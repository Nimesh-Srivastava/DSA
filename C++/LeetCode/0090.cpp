//Solution 1 :-
class Solution {
public:
  void backtrack(vector<int> &arr, vector<vector<int>> &ans, vector<int> curr,
                 int start = 0) {
    ans.push_back(vector<int>(curr));
    for (int i{start}; i < arr.size(); i++) {
      if (i > start and arr[i] == arr[i - 1])
        continue;
      curr.push_back(arr[i]);
      backtrack(arr, ans, curr, i + 1);
      curr.pop_back();
    }
  }
  vector<vector<int>> subsetsWithDup(vector<int> &arr) {
    vector<vector<int>> ans;
    vector<int> curr;
    sort(arr.begin(), arr.end());
    backtrack(arr, ans, curr);
    return ans;
  }
};

//Solution 2 :-
class Solution {
public:
    vector<vector<int>> result;
    
    void backtrack(vector<int>& nums, vector<int>& temp, int siz){
        result.push_back(temp);
        
        for(int i = siz; i < nums.size(); i++){
            
            if(i > siz && nums[i] == nums[i - 1])
                continue;
            
            temp.push_back(nums[i]);
            backtrack(nums, temp, i + 1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int> temp;
        
        sort(nums.begin(), nums.end());
        
        backtrack(nums, temp, 0);
        
        return result;
    }
};
