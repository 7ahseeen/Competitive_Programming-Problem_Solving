#include <stdio.h>
     
     
int main(){
 
    char s[1000001];
    
    int len;

    scanf("%s", s);
    
    for(len = 0; s[len] != '\0'; len++){
        if(s[len] == ',')   s[len] = ' ';
        else{
            if(s[len] < 96) s[len] += 32;
            else s[len] -= 32;
        }
    }

    printf("%s",s);

    return 0;
}