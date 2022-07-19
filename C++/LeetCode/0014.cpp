class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        
        if (n <= 1)
            return strs[0];
        
        sort(strs.begin(), strs.end());
        
        string firstString = strs[0], lastString = strs[n - 1];
        
        string res = "";
        
        for(int i = 0; i < firstString.size(); i++) {
            
            if(firstString[i] != lastString[i])
                return res;
            
            else
                res += firstString[i];
        }
        return res;
    }
};
