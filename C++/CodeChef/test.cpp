#include <iostream>
using namespace std;

int main() {
    int num=0;
    while(1) {
        cin>>num;
        if(num==42) {
            break;
        }
        cout<<num<<endl;
    }
	return 0;
}
