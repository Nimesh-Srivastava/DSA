#include <stdio.h>

int main(void) 
{
    const int s = 10e6;
    int n, arr[s], k, a=0;
    scanf("%d%d", &n, &k);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]==k)
            {
                a++;
            }
    }
    if (a>0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
}
