#include <stdio.h>

int main(void) 
{
    int N;
    scanf("%d", &N);
    int a, b, c;
    a = N%5;
    b = N%11;
    c = N%55;
    if (c==0)
    {
       printf("BOTH"); 
    }
    else if (a==0)
    {
        printf("ONE");
    }
    else if (b==0)
    {
        printf("ONE");
    }
    else
    {
        printf("NONE");
    }
    
	return 0;
}
