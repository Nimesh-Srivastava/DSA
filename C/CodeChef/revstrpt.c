#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);
    int s = n-1;
    for(int i=0; i<n; i++)
    {
        int p = n-s;
        for(int j=0; j<s; j++)
        {
            printf(" ");
        }
        for(int k=0; k<p; k++)
        {
            printf("*");
        }
        s = s-1;
        printf("\n");
    }
}
