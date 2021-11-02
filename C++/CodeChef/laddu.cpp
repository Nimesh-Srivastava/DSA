#include<bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int num;
        cin >> num;

        string origin;
        cin >> origin;

        int sum = 0;

        string activity;

        for(int i = 0; i < num; i++){
            cin >> activity;

            if(activity == "CONTEST_WON"){
                int rank = 0;
                cin >> rank;

                if(rank < 20)
                    sum += 20 - rank;

                sum += 300;
            }

            else if(activity == "TOP_CONTRIBUTOR")
                sum += 300;

            else if(activity == "BUG_FOUND"){
                int sev;
                cin >> sev;

                sum += sev;
            }

            else if(activity == "CONTEST_HOSTED")
                sum += 50;
        }

        int countMonths = 0;

        if(origin == "INDIAN"){
            while(sum >= 200){
                sum -= 200;
                countMonths++;
            }
        }
        else{
            while(sum >= 400){
                sum -= 400;
                countMonths++;
            }
        }

        cout << countMonths << endl;
    }

    return 0;
}
