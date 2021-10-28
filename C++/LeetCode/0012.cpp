class Solution {
public:
    string intToRoman(int num) {
        
        map<int, string> map1;
        
        map1[1] = "I";
        map1[4] = "IV";
        map1[5] = "V";
        map1[9] = "IX";
        map1[10] = "X";
        map1[40] = "XL";
        map1[50] = "L";
        map1[90] = "XC";
        map1[100] = "C";
        map1[400] = "CD";
        map1[500] = "D";
        map1[900] = "CM";
        map1[1000] = "M";
        
        string result = "";
        
        while(num > 0){
            
            //reverse iterator
            auto it = map1.rbegin();
            
            while(num < it->first)
                it++;
            
            num -= it->first;
            
            result += it->second;
        }
        
        return result;
    }
};
