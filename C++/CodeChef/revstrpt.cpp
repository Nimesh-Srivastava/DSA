#include <iostream>
using namespace std;

int main() {
	
	int rows = 0;
	
	cin >> rows;
	
	for(int i = 0; i < rows; i++){
	    
	    int j = 0;
	    
	    for(j = 0; j < rows - 1 - i; j++)
	        cout<<" ";
	    
	    for(int k = j; k < rows; k++)
	        cout<<"*";
	   
	    cout<<endl;
	}
	return 0;
}
