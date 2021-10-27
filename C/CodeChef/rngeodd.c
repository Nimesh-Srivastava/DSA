#include <stdio.h>

int main(void) 
{
    int l, r;
    scanf("%d%d", &l, &r);
    if (l%2==0)
    {
        int s = l+1;
        do
        {
            printf("%d ", s);
            s = s + 2;
        } while(s<=r);
        
    }
    else 
    {
        int s = l;
        do 
        {
            printf("%d ", s);
            s = s + 2;
        } while(s<=r);
        
    }
	return 0;
}
