#include <stdio.h>

int main(void) 
{
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    
    int not_a = b+c;
    int not_b = a+c;
    int not_c = b+a;
    
    if(not_a >  a && not_b > b && not_c > c)
    {
        if (a==b && b==c)
        {
            printf("1");
        }
        else if (a!=b && b!=c && c!=a)
        {
            printf("3");
        }
        else 
        {
            printf("2");
        }
    }
    else 
    {
        printf("-1");
    }
    
	return 0;
}
