class WordFilter {
    
    unordered_map<string, int> m1;
    
public:
    WordFilter(vector<string>& words) {
        
        int cnt = 0;
        
        for(auto& word : words) {
            int siz = word.size();
            cnt++;

            for(int i = 1; i <= siz; i++) {
                string pre = word.substr(0, i);
                
                for(int j = 0; j < siz; j++) {
                    string suf = word.substr(j, siz);
                    
                    m1[pre + "&" + suf] = cnt;
                }
            }
        }
        
    }
    
    int f(string prefix, string suffix) {
        string str = prefix + "&" + suffix;
        
        return m1[str] - 1;
    }
};
