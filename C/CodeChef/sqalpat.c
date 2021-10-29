#include <stdio.h>

int main(void) 
{
    int n, s = 1, k;
    scanf("%d", &n);
    if(n%2==0)
    {
    for(int i=0; i<n/2; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ", s);
            s++;
        }
        printf("\n");
        k = s + 4;
        for(int j=0; j<5; j++)
        {
            printf("%d ", k);
            k = k-1;
        }
        s = s + 5;
        printf("\n");
    }
    }
    else
    {
        int a;
        a = (n-1)/2;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ", s);
            s++;
        }
        printf("\n");
        k = s + 4;
        for(int j=0; j<5; j++)
        {
            printf("%d ", k);
            k = k-1;
        }
        s = s + 5;
        printf("\n");
    }
    for(int j=0; j<5; j++)
        {
            printf("%d ", s);
            s++;
        }
    
    }
   return 0;
}

