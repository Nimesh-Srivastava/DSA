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
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        //vector to store next greater elements of nums2
        vector<int> next_gr(nums2.size());
        
        stack<int> st;
        st.push(0);
        
        //find next greater elements of nums2
        for(int i=1; i<nums2.size(); i++){
            
            while(!st.empty() && nums2[i] > nums2[st.top()]){
                
                next_gr[st.top()] = nums2[i];
                st.pop();
            }
            
            st.push(i);
        }
        
        //store -1 whose next greater element is not present
        while(!st.empty()){
            
            next_gr[st.top()] = -1;
            st.pop();
        }
        
        //mapping for element-to-index call
        unordered_map<int, int> map1;
        for(int i=0; i<nums2.size(); i++)
            map1[nums2[i]] = i;
        
        vector<int> result;
        
        for(int i=0; i<nums1.size(); i++)
            result.push_back(next_gr[map1[nums1[i]]]);
        
        return result;
    }
};
