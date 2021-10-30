#include <iostream>

using namespace std;

int main()
{
	int t = 0;
	int num, revNum;
	int rem, i, temp, dig;

	cin >> t;
	while (t--) {
		i = 1;
		rem = 0;
		revNum = 0;
		cin >> num;
		temp = num;
		while (num > 0) {
			rem = num % 10;
			i *= 10;
			num /= 10;
		}
		num = temp;
		while (num > 0) {
			rem = num % 10;
			i /= 10;
			revNum += i * rem;
			num /= 10;
		}
		cout << revNum << endl;
	}

	return 0;
}
