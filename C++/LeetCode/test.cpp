class Solution{
  public:
  
  int countChar(string& s){
    int cnt = 0;
    
    for(int i=0; i < s.length(); i++)
        cnt++;
    
    return cnt;
  }
};
