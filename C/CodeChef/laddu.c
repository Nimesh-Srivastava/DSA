#include <stdio.h>
#include<string.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int act;
        int laddu = 0;
        char origin[15];
        scanf("%d",&act);
        scanf("%s",origin);
        for(int i = 0; i < act; i++)
        {
            char activity[20];
            scanf("%s",activity);
            if(strcmp(activity, "CONTEST_WON")==0)
            {
                int a;
                scanf("%d", &a);
                int b = (20-a);
                if(b < 0)
                {
                    b = 0;
                }
                laddu += 300 + b;
                
            }
            else if(strcmp(activity, "TOP_CONTRIBUTOR")==0)
            {
                laddu = laddu + 300;
            }
            else if(strcmp(activity, "BUG_FOUND")==0)
            {
                int severity;
                scanf("%d",&severity);
                laddu = laddu + severity;
            }
            else
            {
                laddu = laddu + 50;
            }
        }
        
        if(strcmp(origin, "INDIAN")==0)
        {
            printf("%d\n", laddu/200);
        }
        else
        {
            printf("%d\n", laddu/400);
        }
        
    }
	return 0;
}
