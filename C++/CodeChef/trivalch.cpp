#include <iostream>
using namespace std;

int main() {
	
	int a = 0, b = 0, c = 0;
	
	cin >> a >> b >> c;
	
	int not_a = b + c;
	int not_b = a + c;
	int not_c = a + b;
	
	if(not_a > a && not_b > b && not_c > c)
	    cout<<"YES";
	    
	else
	    cout<<"NO";
	return 0;
}
