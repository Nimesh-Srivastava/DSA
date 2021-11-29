class UnionFind{
    unordered_map<string, string> connection;
    
public:
    void unions(string x, string y){
        if(connection.count(x) == 0)
            connection[x] = x;
        
        if(connection.count(y) == 0)
            connection[y] = y;
        
        string par_x = find(x);
        string par_y = find(y);
        
        connection[par_x] = par_y;
    }
    
    string find(string s){
        if(connection[s] != s)
            connection[s] = find(connection[s]);
        
        return connection[s];
    }
    
    bool isRepresentative(string s){
        return connection[s] == s;
    }
        
    vector<string> getGroupEmails(string remail) {
        vector<string> eList;
        
        for(auto email : connection)
            if(find(email.first) == remail)
                eList.push_back(email.first);
            
        return eList;
    }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        UnionFind *unionFind = new UnionFind();
        
        unordered_map<string, string> owner;
        
        for(auto &account : accounts) {
            for(int i = 1; i < account.size(); i++) {
                owner[account[i]] = account[0];
                
                unionFind -> unions(account[i], account[1]);
            }
        }
        
        vector<vector<string>> res;
        
        for(auto itr : owner) {
            if(unionFind -> isRepresentative(itr.first)) {
                
                vector<string> temp = unionFind -> getGroupEmails(itr.first);
                
                sort(temp.begin(), temp.end());
                
                temp.insert(temp.begin(), itr.second);
                
                res.push_back(temp);
            }
        }
        return res;
    }
};
