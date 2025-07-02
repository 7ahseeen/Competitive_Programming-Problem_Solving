#include <stdio.h>
#include <string.h>

void strrev(char *s, int len){
    int i = 0;
    char tmp;
    len--;
    
    while(i < len){
        tmp = s[i];
        s[i] = s[len];
        s[len] = tmp;
        i++;
        len--;
    }
}

int main() {
    char str[101], cpy[101];
    
    scanf("%s", str);
    
    int i = 0, j = strlen(str) -1;
    
    while(i <= j){
        if(str[i] == '?' && str[j] == '?')
            str[i] = str[j] = 'a';
        else if(str[i] == '?')
            str[i] = str[j];
        else if(str[j] == '?')
            str[j] = str[i];
            
        i++;
        j--;
    }
    
    strcpy(cpy, str);
    
    strrev(cpy, strlen(str));
    
    if(strcmp(str, cpy) != 0)
        printf("-1");
    else
        printf("%s", str);

    return 0;
}