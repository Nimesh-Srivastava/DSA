class CombinationIterator {
    
    string s;
    int choose;
    vector<int> pos;
    bool flag;
    
public:
    CombinationIterator(string characters, int combinationLength) {
        s = characters;
        choose = combinationLength;
        
        for(int i = 0; i < choose; i++)
            pos.push_back(i);
        
        if(choose > s.length())
            flag = false;
        else
            flag = true;
    }
    
    string next() {
        string temp = "";
        
        for(auto i:pos)
            temp += s[i];
        
        flag = next_pos();
        
        return temp;
    }
    
    bool hasNext() {
        return flag;
    }
    
    bool next_pos(){
        int c = 0;
        
        for(int i = pos.size() - 1; i >= 0; i--) {
            if(pos[i] < s.length() - 1 - c) {
                
                pos[i]++;
                
                for(int j=i+1;j<pos.size();j++)
                    pos[j] = pos[j-1]+1;
                    
                break;
            }
            else if(i == 0)
                return false;
            
            c++;
        }
        return true;
    }
};
