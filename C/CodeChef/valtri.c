#include <iostream>
using namespace std;

int main() 
{
    int n, a, b, c;
    scanf("%d", &n);
    a = n%5;
    b = n%6;
    c = n%30;
    if(a==0)
    {
        printf("YES");
    }
    else if(b==0)
    {
        printf("YES");
    }
    else if(c==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    
	return 0;
}
