#include <stdio.h>
     
     
int main(){
 
    char s[1000001];
    
    int len, t, g;

    scanf("%s", s);

    g = 1;
    
    for(len = 0; s[len] != '\0'; len++);
    
    for(int i = 0; i < len; i++)
        if(s[i] != s[len - 1 - i])
            g = 0;

    printf("%s", g ? "YES\n" : "NO\n");
    
    return 0;
}