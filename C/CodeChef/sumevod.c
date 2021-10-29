#include <stdio.h>

int main(void) 
{
    long long int n, sum=0, m=1, k=2, a=0; 
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        sum = sum + m;
        m = m + 2;
    }
    printf("%lli ", sum);
    
    for (int i=0; i<n; i++)
    {
        a = a + k;
        k = k + 2;
    }
    printf("%lli", a);
    
	return 0;
}
