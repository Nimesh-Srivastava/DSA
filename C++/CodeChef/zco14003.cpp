#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int num;
    cin >> num;
    
    vector<long long int> prices(num, 0);
    
    long long int maxVal = INT_MIN;
    
    for(int i = 0; i < num; i++)
        cin >> prices[i];
        
    sort(prices.begin(), prices.end());
    
    for(int i = 0; i < num; i++)
        maxVal = max(maxVal, prices[i] * (num - i));
        
    cout<<maxVal;
    
	  return 0;
}
