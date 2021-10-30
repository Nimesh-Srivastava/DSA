#include<bits/stdc++.h>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;

	cin >> t;
	while (t--) {
		
		int count = 1;
		
		int n;
		cin >> n;
		
		vector<int> arr(n, 0);
		
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		
		for (int i = 1; i < n; i++) {
			if (arr[i - 1] > arr[i])
				count++;
      
			else 
				arr[i] = arr[i - 1];
		}
		cout << count << endl;
	}

	return 0;
}
