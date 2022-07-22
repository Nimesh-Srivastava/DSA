#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    unordered_map<char, int>m;
    int balloons;

    while(t--) {
        int siz;
        cin >> siz;

        string s;
        cin >> s;

        m.clear();
        balloons = 0;

        for(int i = 0; i < siz; i++) {
            m[s[i]]++;

            if(m[s[i]] == 1)
                balloons += 2;
            else
                balloons += 1;
        }
        cout << balloons << endl;
    }

    return 0;
}
