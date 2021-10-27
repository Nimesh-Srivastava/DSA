#include <stdio.h>

int main(void) 
{
    int  a, b, x, y, sum;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    sum = x*a + y*b;
    printf("%d", sum);
	return 0;
}
