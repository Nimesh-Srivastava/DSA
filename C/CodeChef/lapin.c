#include <stdio.h>
#include <string.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[1002];
        scanf("%s", s);
        
        int n = strlen(s);
        
        int arr[26];
        
        for(int i=0; i<26; i++)
        {
            arr[i] = 0;
        }
        
        int half = n / 2;
        
        for(int i = 0; i < half; i++){
            arr[s[i]-'a']++;
        }
        
        if(n % 2 != 0)
        {
            half++;
        }
        
        for(int i = half; i < n; i++)
            arr[s[i]-'a']--;
        int flag = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i] != 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
	return 0;
}

