#include<iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	int count;
	long long int n;

	cin >> t;
	while (t--) {
		cin >> n;
		count = 0;
		while (n > 0) {
			count += n / 5;
			n /= 5;
		}
		cout << count << endl;
	}

	return 0;
}
