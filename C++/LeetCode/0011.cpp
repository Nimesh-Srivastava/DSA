//Solution 1 :-
class Solution {
public:
  int maxArea(vector<int> &arr) {
    int i = 0, j = int(arr.size()) - 1;
    int ans = 0;
    while (i < j) {
      int curr = min(arr[i], arr[j]) * (j - i);
      ans = max(curr, ans);
      if (arr[i] <= arr[j])
        i++;
      else if (arr[j] <= arr[i])
        j--;
      else
        break;
    }
    return ans;
  }
};

//Solution 2 :-
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l = 0;
        int r = height.size() - 1;
        
        int area = 0;
        
        while(l < r){
            
            int temp = 0;
            
            if(height[l] <= height[r]){
                temp = height[l] * (r - l);
                l++;
            }
            
            else{
                temp = height[r] * (r - l);
                r--;
            }
            
            if(temp > area)
                area = temp;
        }
        
        return area;
    }
};
