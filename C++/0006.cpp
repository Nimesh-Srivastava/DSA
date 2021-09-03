class Solution {
public:
    string convert(string s, int numRows) {
        
        int len = s.length();
        
        if(numRows > len || numRows <= 1)
            return s;
        
        //use mov for sense of direction to push_back values
        int row = 0;
        int mov = -1;
        vector<char> zigzag[numRows];
        
        for(auto elem:s){
            zigzag[row].push_back(elem);
            
            if(row == 0 || row == numRows - 1)
                mov *= -1;
            
            row += mov;
        }
        
        string ans = "";
        
        for(auto i:zigzag)
            for(auto j:i)
                ans += j;
        
        return ans;
    }
};
