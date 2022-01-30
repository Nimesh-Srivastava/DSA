class Solution {
public:
    vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;
    
    void backtrack(string& digits, int pos, string& temp){
	    
        if(pos == digits.size()) {
		    ans.push_back(temp);    
    		return;
    	}
        
	    for(auto c : mappings[digits[pos] - '2']){
		    
            temp.push_back(c);
    		backtrack(digits, pos + 1, temp);
    		temp.pop_back();
	    }   
    }
    
    vector<string> letterCombinations(string digits) {
	    if(digits == "") 
            return ans;
        
    	string temp = "";
    	
        backtrack(digits, 0, temp);
    	
        return ans; 
    }
};
