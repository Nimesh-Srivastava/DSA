//Solution 1 :-
class Solution {
public:
  void backtrack(vector<int> &arr, int target, vector<vector<int>> &ans,
                 vector<int> &curr, int start = 0) {
    if (target < 0)
      return;
    if (target == 0)
      ans.push_back(curr);
    else {
      for (int i{start}; i < int(arr.size()); i++) {
        curr.push_back(arr[i]);
        backtrack(arr, target - arr[i], ans, curr, i);
        curr.pop_back();
      }
    }
  }
  vector<vector<int>> combinationSum(vector<int> &arr, int target) {
    vector<vector<int>> ans;
    vector<int> curr;
    backtrack(arr, target, ans, curr);
    return ans;
  }
};


//Solution 2 :-
class Solution {
public:
    
    vector<vector<int>>result;
    vector<int>current;

void function(vector<int>& candidates,int target,int index)
{
    if(target==0){
        result.push_back(current);
        return;
    }
    
    if(index==candidates.size() || target<0)return;
    
    current.push_back(candidates[index]);
    function(candidates,target-candidates[index],index);
    current.pop_back();
    function(candidates,target,index+1);      
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        function(candidates,target,0);
        return result;
    }
};
