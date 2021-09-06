class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int check = 0;
        
        if(ruleKey == "color")
            check = 1;
        else if(ruleKey == "name")
            check = 2;
        
        int result = 0;
        
        for(int i=0; i<items.size(); i++){
            
            if(items[i][check] == ruleValue)
                result = result + 1;
        }
        
        return result;
    }
};
