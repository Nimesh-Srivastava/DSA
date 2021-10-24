#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n{0};
    cin>>n;
    int sum{3};
    for(int i = 2; n % sum != 0; i++){
        sum+= pow(2, i);
    }
    
    cout<<n/sum<<endl;
    
    return;
}


int main()
{
    int t{0};
    
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
}