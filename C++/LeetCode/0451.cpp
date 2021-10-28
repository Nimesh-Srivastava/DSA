class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> freq;
        unordered_map<char, int>::iterator it;
        
        vector<pair<int, char>> v;
        
        for(int i=0; i<s.length(); i++)
            freq[s[i]]++;
        
        for(it = freq.begin(); it != freq.end(); it++)
            v.push_back(make_pair(it -> second, it -> first));
        
        sort(v.begin(), v.end());
        
        string result;
        
        for(int i = v.size()-1; i >= 0; i--){
            auto c = v[i];
            result.append(c.first, c.second);
        }
        
        return result;
    }
};
