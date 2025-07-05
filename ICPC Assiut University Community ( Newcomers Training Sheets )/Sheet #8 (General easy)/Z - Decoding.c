#include <stdio.h>
#include <string.h>

void cat(char* str, char ch, int i){
    int len = strlen(str);
    
    if(i == 1){
        str[len] = ch;
        str[len + 1] = '\0';
    }
    else{
        for(int i = len + 1; i > 0; i--){
            str[i] = str[i - 1];
        }
        
        str[0] = ch;
    }
}

int main(){
    
    int n, iter = 0;
    
    char encoded[100001], decoded[100001] = "";
    
    scanf("%d", &n);
    
    scanf("%s", encoded);
    
    while(n--){
        if(n % 2 == 0){
            cat(decoded, encoded[iter++], 1);
        }
        else{
            cat(decoded, encoded[iter++], 0);
        }
    }
    
    printf("%s", decoded);
    
    return 0;
}