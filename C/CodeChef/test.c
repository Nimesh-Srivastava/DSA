#include <stdio.h> 
#include <stdlib.h>

int main(void) 
{
    int arr[100];
    
    for (int i=0; i<99; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]==42)
        {
            break;
        }
        printf("%d\n", arr[i]);
    }
	return 0;
}
