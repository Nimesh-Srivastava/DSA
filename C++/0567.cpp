//Solution 1:-
class Solution {
public:
  bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length())
      return false;
    std::vector<int> target(26), f(26);
    int k{int(s1.length())};
    for (int i{0}; i < k; i++) {
      target[s1[i] - 'a']++;
      f[s2[i] - 'a']++;
    }
    if (f == target)
      return true;
    int n{int(s2.length())};
    for (int i{1}; i + k - 1 < n; i++) {
      f[s2[i + k - 1] - 'a']++;
      f[s2[i - 1] - 'a']--;
      if (f == target)
        return true;
    }
    return false;
  }
};


//Solution 2:-
class Solution {
    public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.length() > s2.length())
            return false;
        
        vector<int> chars(26, 0);
        
        for(auto c : s1)
            chars[c - 'a']++;
        
        for(int i = 0; i < s1.length(); i++)
            chars[s2[i] - 'a']--;
        
        bool found = true;
        
        for(auto c : chars){
            if(c != 0){
                found = false;
                break;
            }
        }
        
        if(found)
            return true;
        
        int start = 1;
        
        while(start <= s2.length() - s1.length()){
            int pos1 = s2[start - 1] - 'a';
            int pos2 = s2[start + s1.length() - 1] - 'a';
            
            chars[pos1]++;
            chars[pos2]--;
            
            found = true;
        
            for(auto c : chars){
                if(c != 0){
                    found = false;
                    break;
                }
            }
            
            if(found)
                return true;
            
            start++;
        }
        
        return false;
    }
};
