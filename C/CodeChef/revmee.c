#include <stdio.h>

int main(void) 
{
    const int s = 10e6;
    int n, arr[s];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j=n; j>0; j--)
    {
        printf("%d ", arr[j-1]);
    }
	return 0;
}
