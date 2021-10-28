#include <stdio.h>

int main(void) 
{
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    
    int not_a = b+c;
    int not_b = a+c;
    int not_c = b+a;
    
    if(not_a >  a && not_b > b && not_c > c)
        printf("YES");
    
    else
        printf("NO");
    
	return 0;
}
