#include <stdio.h>

int main(void) 
{
    int n, a = 1;
    
    scanf("%d", &n);
    
    const int siz = 1e6;
    int arr[siz];
    
    int cnt = 0;
    
    for (int i=0; i<n; i++)
    {
        if(n % a == 0)
        {
            arr[i] = a;
            a++;
            cnt++;
        }
        else{
            arr[i] = -1;
            a++;
        }
    }
    printf("%d", cnt);
    
    printf("\n");
    
    for(int j=0; j<n; j++){
        if(arr[j] > 0)
            printf("%d ", arr[j]);
    }
    
	return 0;
}
