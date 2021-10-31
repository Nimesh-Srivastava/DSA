#include <stdio.h>
#include <stdlib.h>

long long int comp (const void * a, const void * b) 
{
    return (*(int*)a - *(int*)b);
}

int main(void) 
{
    long long int n;
    scanf("%lli", &n);
    const long long int s = 1e9;
    long long int cust_bud[s];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lli", &cust_bud[i]);
    }
    
    qsort(cust_bud, n, sizeof(long long int), comp);
    
    long long int maxval = 0;
    
    for (long long int i = 0; i < n; i++)
    {
        long long int temp = cust_bud[i]*(n - i);
        if (temp > maxval)
            maxval = temp;
    }
    printf("%lli", maxval);
    
	return 0;
}

