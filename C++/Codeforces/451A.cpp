#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n{0}, m{0};
    cin>>n>>m;
    int inter{n*m}, nStick{n+m}, intSum{0};
    bool akshat{false};
    
    for(int i{nStick-1}; intSum != inter; i -= 2 ){
        akshat = !akshat;
        intSum+=i;
    }
    
    if(akshat) cout<<"Akshat";
    else cout<<"Malvika";
    
    return;
}


int main()
{
    solve();

    return 0;
}
