#include <stdio.h>

int main(void) 
{
    int a, b, c, sum = 0;
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    if(sum==180 && a!=0 && b!=0 && c!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
	return 0;
}
