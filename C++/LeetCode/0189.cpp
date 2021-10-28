//Solution 1:-
class Solution {
public:
    void rotate(std::vector<int>& arr, int k) {
        int n{int(arr.size())}, totalCount{n};
        for(int i{0}; i < n; i++){
            int curr{i}, swap{arr[i]};
            if(totalCount){
                do{
                    int j{0};
                    if(curr + k > n - 1) j = (curr + k) % n;
                    else j = curr + k;
                    std::swap(arr[j], swap);
                    curr = j;
                    totalCount--;
                } while(curr != i);
            }
        }
    }
};

//Solution 2:-
class Solution {
public:
    void rotate(std::vector<int>& arr, int k) {
        int n{int(arr.size())};
        k = k % n;
        std::reverse(arr.begin(), arr.end());
        std::reverse(arr.begin(), arr.begin() + k);
        std::reverse(arr.begin() + k, arr.end());
    }
};


//Solution 3:-
class Solution {
public:
    void revArr(vector<int>& nums, int i, int j){
        
        while(i < j){
            nums[i] += nums[j];
            nums[j] = nums[i] - nums[j];
            nums[i] -= nums[j];
            i++;
            j--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        k %= nums.size();
        
        revArr(nums, 0, nums.size()-1);
        revArr(nums, 0, k-1);
        revArr(nums, k, nums.size()-1);
    }
};
