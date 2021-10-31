class Solution {
    
    const int MOD = 1e7 + 7;
    
    //store all rolling hash values
    vector<int> rollHash;
    
public:
    void initialise(vector<int>& v, int siz){
        v.clear();
        
        //resizing rollHash vector to match the input string
        v.resize(siz);
        
        //26 to power 0 = 1
        v[0] = 1;
        
        for(int i = 1; i < siz; i++)
            v[i] = (26 * v[i - 1]) % MOD;
    }
    
    bool comp(string& s, string& ans, int siz, int mid){
        
        //key -> hash && hash = starting index of substring
        unordered_map<int, vector<int>> hashMap;
        
        //define hash of current window
        int hash = 0;
        
        for(int i = 0; i < mid; i++)
            hash = (hash * 26 + (s[i] - 'a')) % MOD;
        
        hashMap[hash].push_back(0);
        
        //Starting rolling hash or sliding window
        for(int i = mid; i < siz; i++){
            
            hash = ((hash - rollHash[mid - 1] * (s[i - mid] - 'a')) % MOD + MOD) % MOD;
            hash = (hash * 26 + (s[i] - 'a')) % MOD;
            
            auto search = hashMap.find(hash);
            auto over = hashMap.end();
            
            if(search != over){
                for(auto init : hashMap[hash]){
                    string temp1 = s.substr(init, mid);
                    string temp2 = s.substr(i - mid + 1, mid);
                    
                    if(temp1.compare(temp2) == 0){
                        ans = temp1;
                        return true;
                    }
                }
            }
            hashMap[hash].push_back(i - mid + 1);
        }
        return false;
    }
    
    string longestDupSubstring(string s) {
        
        int siz = s.length();
        
        if(siz == 0)
            return "";
        
        initialise(rollHash, siz);
        
        int left = 1;
        int right = siz;
        int mid;
        
        string result;
        result.clear();
        
        while(left <= right){
            
            string temp;
            mid = left + (right - left)/2;
            
            bool match = comp(s, temp, siz, mid);
            
            if(match){
                if(temp.size() > result.size())
                    result = temp;
                
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        
        return result;
    }
};
