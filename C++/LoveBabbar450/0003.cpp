//Solution 1 :-
int kthSmallest(int arr[], int l, int r, int k) {
        vector<int> nums;
        
        for(int i = 0; i <= r; i++){
            int temp = arr[i];
            nums.push_back(temp);
        }
            
        sort(nums.begin(), nums.end());
        
        return nums[k - 1];
}
