#include <stdio.h>                                                                                                                                                                                                                                                                                

int seclar(int a, int b, int c)                                                             
{                                                                                                                                                                                      
    if (a > b && b > c)                                                                             
    {                                                                                               
        return b;                                                                                   
    }                                                                                                                                                                                  
    else if (a > c && c > b)                                                                        
    {                                                                                               
        return c;                                                                                   
    }                                                                                                                                                                    
    else                                                                                            
    {                                                                                               
        return -1;                                                                                  
    }                                                                                               
}                                                                                                   

int main(void)                                                                                      
{                                                                                                                                             
    int a, b, c, x, y, z;                                                               

    scanf("%d %d %d", &a, &b, &c);                                                                  

    x = seclar(a, b, c);                                                                
    y = seclar(b, c, a);                                                                
    z = seclar(c, a, b);

    if (x != -1)                                                                                
    {                                                                                               
        printf("%d\n", x);                                                                      
    }                                                                                                                                                  
    else if (y != -1)                                                                           
    {                                                                                               
        printf("%d\n", y);                                                                      
    }                                                                                                                                               
    else if (z != -1)                                                                           
    {                                                                                               
        printf("%d\n", z);                                                                      
    }                                                                                               

    return 0;                                                                                       
}  
