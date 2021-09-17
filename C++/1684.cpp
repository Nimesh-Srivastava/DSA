class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        //array representing all lowercase letters initialized with zero
        int lowerCase[26] = {0};
        
        int result = 0;
        
        //iterating over all "allowed" values and incrementing array
        //to identify which letters are present
        for(auto c : allowed)
            lowerCase[c - 'a']++;
        
        
        for(auto w : words){
            
            bool found = true;
            
            for(auto c : w){
                
                //if a letter in given word has its value as "0" in lowerCase array,
                //then we change found to false
                if(lowerCase[c - 'a'] == 0){    
                    found = false;
                    break;
                }
            }
            
            //for all found = true, the string is consistent
            if(found)
                result++;
        }
        
        return result;
    }
};
