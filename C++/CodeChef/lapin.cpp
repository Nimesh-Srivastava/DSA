#include <bits/stdc++.h>

using namespace std;

void cal(string& s){
    int half = s.length() / 2;
    
    unordered_map<char, int> map1;
    
    for(int i = 0; i < half; i++)
        map1[s[i]]++;
        
    if(s.length() % 2 != 0)
        half++;
        
    for(int i = half; i < s.length(); i++)
        map1[s[i]]--;
        
    for(auto c : map1){
        if(c.second != 0){
            cout<<"NO";
            return;
        }
    }
  
    cout<<"YES";
}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    cal(s);
	    cout<<endl;
	}
	
	return 0;
}
