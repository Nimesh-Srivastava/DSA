#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n{0};
    cin>>n;
    vector<int> arr;
    
    int minVal{INT_MAX}, maxVal{INT_MIN};
    
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
        minVal = min(minVal, temp);
        maxVal = max(maxVal, temp);
    }
    
    if(arr[0] == maxVal && arr[n-1] == minVal){ cout<<3<<endl; return; }
    if(arr[0] != minVal && arr[n-1] != maxVal){ cout<<2<<endl; return; }
    if(arr[0] != minVal || arr[n-1] != maxVal){ cout<<1<<endl; return; }
    
    for(int i{ 1 }; i < n; i ++){
        if(arr[i] < arr[i-1]){
            cout<<1<<endl; 
            return; 
        }
    }
    cout<<0<<endl; 
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
