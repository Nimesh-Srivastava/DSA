#include<stdio.h>

int main(){
    long long int n;
    scanf("%lli", &n);
    
    if(n < 2){
        printf("%lli", n);
        return 0;
    }
    
    printf("%lli", n * (n + 1)/2);
    
    return 0;
}
