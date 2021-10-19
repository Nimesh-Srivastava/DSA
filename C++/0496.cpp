//Solution 1 : bruteforce
class Solution {
public:
    void find_next(vector<int>& result, vector<int> nums2, int idx, int res_idx){
        
        int val = nums2[idx];
        
        while(idx < nums2.size()){
            
            if(nums2[idx] > val){
                
                result[res_idx] = nums2[idx];
                break;
            }
            
            idx++;
        }
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result(nums1.size(), -1);
        
        for(int i=0; i<nums1.size(); i++){
            
            int val = nums1[i];
            
            for(int j=0; j<nums2.size(); j++){
                
                if(nums2[j] == val)
                    find_next(result, nums2, j, i);
            }
        }
        
        return result;
    }
};


//Solution 2 : Optimized using stacks
