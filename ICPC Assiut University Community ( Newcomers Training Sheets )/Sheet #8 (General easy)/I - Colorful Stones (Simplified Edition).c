#include <stdio.h>

int main(){
    
    char path[52], cmd[52];
    
    scanf("%s %s", path, cmd);
    
    int i = 0, pos = 0;
    
    while(cmd[i] != '\0'){
        if(cmd[i] == path[pos])
            pos++;
        
        i++;
    }
    
    printf("%d", pos + 1);
    
    return 0;
}