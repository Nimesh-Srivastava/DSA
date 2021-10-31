//Solution 1 :-
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


//Solution 2 :-
//This solution is with arrays only

#include<bits/stdc++.h>

using namespace std;

string cal(string& s){
    int half = s.length() / 2;

    vector<int> freq(26, 0);

    for(int i = 0; i < half; i++)
        freq[s[i] - 'a']++;

    if(s.length() % 2 != 0)
        half++;

    for(int i = half; i < s.length(); i++)
        freq[s[i] - 'a']--;
        
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0)
            return "NO";
    }
    return "YES";
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        string ans = cal(s);
        cout << ans << endl;
    }

    return 0;
}
