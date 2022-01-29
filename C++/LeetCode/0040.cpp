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
        if (i > start and arr[i] == arr[i - 1])
          continue;
        curr.push_back(arr[i]);
        backtrack(arr, target - arr[i], ans, curr, i + 1);
        curr.pop_back();
      }
    }
  }
  vector<vector<int>> combinationSum2(vector<int> &arr, int target) {
    vector<vector<int>> ans;
    vector<int> curr;
    std::sort(arr.begin(), arr.end());
    backtrack(arr, target, ans, curr);
    return ans;
  }
};


//Solution 2 :-
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& temp, int pos, int siz){
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        if(pos == siz)
            return;
        
        int init = pos;
        
        while(pos < siz){
            
            if(pos != init && candidates[pos] == candidates[pos - 1]){
                pos++;
                continue;
            }
            
            if(candidates[pos] <= target){
                temp.push_back(candidates[pos]);
                backtrack(candidates, target - candidates[pos], ans, temp, pos + 1, siz);
                temp.pop_back();
            }
            else
                break;
            
            pos++;
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> temp;
        int siz = candidates.size();
        
        sort(candidates.begin(), candidates.end());
        
        backtrack(candidates, target, result, temp, 0, siz);
        
        return result;
    }
};
