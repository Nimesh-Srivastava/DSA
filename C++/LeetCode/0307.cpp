class NumArray {
public:
    vector<int> v;
    int sum;
    
    NumArray(vector<int>& nums) {
        v = nums;
        sum = 0;
        
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];
    }
    
    void update(int index, int val) {
        sum -= v[index];
        v[index] = val;
        sum += val;
    }
    
    int sumRange(int left, int right) {
        int res = sum; 
        
        for(int i = 0; i < left; i++)
            res -= v[i];
            
        for(int i = right + 1; i < v.size(); i++)
            res -= v[i];
        
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
