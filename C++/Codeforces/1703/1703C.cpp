#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int siz) {
    for(int i = 0; i < siz; i++)
        cout << arr[i] << " ";
    
    cout << endl;
}

void move(int& init, int& moves) {
    for(int i = 0; i < moves; i++) {
        char m;
        cin >> m;

        if (m == 'U')
            init--;
        else
            init++;

        if (init < 0)
            init += 10;

        init %= 10;
    }
}

int main() {
    
    int t;
    cin >> t;

    while(t--) {
        int wheels;
        cin >> wheels;

        int pos[wheels];
        for(int i = 0; i < wheels; i++)
            cin >> pos[i];

        for(int i = 0; i < wheels; i++) {
            int temp;
            cin >> temp;

            move(pos[i], temp);
        }
        
        display(pos, wheels);
    }

    return 0;
}
