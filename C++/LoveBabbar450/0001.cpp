string reverseWord(string str){
    vector<char> res;
    
    for(int i = str.length() - 1; i >= 0; i--)
        res.push_back(str[i]);
    
    string result(res.begin(), res.end());
    
    return result;
}
