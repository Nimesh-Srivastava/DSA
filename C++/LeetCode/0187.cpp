class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string> result;
        
        if(s.length() <= 10)
            return result;
        
        unordered_map<string, int> map1;
        int i = 0;
        int j = 9;
        
        while(j < s.size()){
            
            string temp = s.substr(i, j - i + 1);
            
            if(map1[temp] == 1)
                result.push_back(temp);
            
            map1[temp]++;
            i++;
            j++;
        }
        
        return result;
    }
};
