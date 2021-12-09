//Solution 1 :-
class Solution {
public:
  int findDuplicate(vector<int> &arr) {
    std::unordered_set<int> set;
    for (auto val : arr) {
      if (set.find(val) != set.end())
        return val;
      else
        set.insert(val);
    }
    return -1;
  }
};

//Solution 2 :-
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1])
                return nums[i];
        
        return NULL;
    }
};

//Solution 3 :- (Most Optimal)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++){
            
            int index = abs(nums[i]) - 1;
            
            nums[index] *= -1;
            
            if(nums[index] > 0)
                return abs(nums[i]);
        }
        
        return NULL;
    }
};
