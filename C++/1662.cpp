class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string compiled_word1;
        string compiled_word2;
        
        for(int i=0; i<word1.size(); i++){
            compiled_word1 += word1[i];
            // cout<<compiled_word1[i]<<" ";
        }
        
        for(int i=0; i<word2.size(); i++){
            compiled_word2 += word2[i];
            // cout<<compiled_word2[i]<<" ";
        }
        
        return (compiled_word1 == compiled_word2);
    }
};
