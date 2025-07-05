#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[100001], str2[100001];
    
    scanf("%s %s", str1, str2);
    
    if(!strcmp(str1, str2))
        printf("-1");
    else if(strlen(str1) > strlen(str2))
        printf("%d", strlen(str1));
    else
        printf("%d", strlen(str2));
    
    return 0;
}