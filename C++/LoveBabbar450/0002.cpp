#include <bits/stdc++.h>

using namespace std;

int main() {
	
	vector<int> input;
	
	int maxEl = INT_MIN;
	int minEl = INT_MAX;
	
	int nums;
	
	cout << "Enter the numbers :-" << endl;
	cin >> nums;
	
	for(int i = 0; i < nums; i++){
	    int temp;
	    cin >> temp;
	    
	    if(temp < minEl)
	        minEl = temp;
	        
	    if(temp > maxEl)
	        maxEl = temp;
	}
	
	cout << "Min element : " << minEl << endl;
	cout << "Max element : " << maxEl << endl;
	
	return 0;
}
