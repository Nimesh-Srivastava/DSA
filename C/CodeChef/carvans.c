#include <stdio.h>

long long int main(void) 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long int sp[10001];
        for (int i = 0; i<n; i++)
        {
            scanf("%lli", &sp[i]);
        }
        int cnt = 1;
        for (int i = 0; i < (n-1); i++)
        {
            if(sp[i+1] < sp[i])
                cnt++;
            else
                sp[i+1] = sp[i];
        }
        
        printf("%d\n", cnt);
    }
	return 0;
}

