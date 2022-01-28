//Solution 1 :-
class Solution {
public:
  void backtrack(vector<int> &arr, vector<vector<int>> &ans, vector<int> curr,
                 int start = 0) {
    ans.push_back(vector<int>(curr));
    for (int i{start}; i < arr.size(); i++) {
      curr.push_back(arr[i]);
      backtrack(arr, ans, curr, i + 1);
      curr.pop_back();
    }
  }
  vector<vector<int>> subsets(vector<int> &arr) {
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
    
    void recur(vector<int>& nums, vector<int> temp, int siz){
        
        if(siz == nums.size()){
            result.push_back(temp);
            return;
        }
        
        recur(nums, temp, siz + 1);
        temp.push_back(nums[siz]);
        recur(nums, temp, siz + 1);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> temp;
        
        recur(nums, temp, 0);
        
        return result;
    }
};
