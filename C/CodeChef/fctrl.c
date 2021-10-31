#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int cnt = 0;
        while(n>0)
        {
            cnt = cnt + n/5;
            n = n/5;
        }
        printf("%d\n", cnt);
    }
	return 0;
}
