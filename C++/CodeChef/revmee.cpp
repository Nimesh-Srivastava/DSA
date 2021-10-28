#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	
	vector<int> nums(n, 0);
	
	for(int i = n - 1; i >= 0; i--)
	    cin >> nums[i];
	
	for(int i = 0; i < n; i++)
	    cout<<nums[i]<<" ";
	    
	return 0;
}
