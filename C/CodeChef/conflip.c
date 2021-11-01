#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int g;
        scanf("%d", &g);
        for (int j=0; j<g; j++)
        {
            int i, n, q;
            scanf("%d%d%d", &i, &n, &q);
            int heads = 0;
            int tails = 0;
    
            if(n%2 == 0)
            {
                heads = tails = n/2;
            }
            else
            {
                if(i==1)
                {
                    tails = (n+1) / 2;
                    heads = (n-1) / 2;
                }
                else
                {
                    heads = (n+1) / 2;
                    tails = (n-1) / 2;
                }
            }
            if (q==1)
                printf("%d\n", heads);
            else
                printf("%d\n", tails);
        }
    }
    
    
	return 0;
}
