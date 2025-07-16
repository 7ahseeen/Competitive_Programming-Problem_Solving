#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char keyboard[] = "qwertyuiopasdfghjkl;zxcvbnm,./",
            txt[1000];
    
    char  mode, *pos = NULL;
    
    int diff;
    
    scanf(" %c", &mode);
    scanf(" %s", txt);
    
    diff = (mode == 'R') ? -1 : 1;
    
    for(int i = 0; i < strlen(txt); i++){
        pos = strchr(keyboard, txt[i]);
        printf("%c", *(pos + diff));
    }

    return 0;
}