#include <stdio.h>
#include <string.h>

char s[1000002];

void wordRev(int start, int stop){

    char tmp;

    for(int i = start; i < (start + stop) / 2 + 1; i++){
        tmp = s[i];
        s[i] = s[stop - (i - start)];
        s[stop - (i - start)] = tmp;
    }
}

int main(){

    scanf("%[^\n]s", s);

    int len = strlen(s), start = -1;


    for(int i = 0; i < len; i++){
        if(start == -1 && s[i] != ' ')
            start = i;

        if(start != -1 && (s[i + 1] == ' ' || i + 1 == len)){
            wordRev(start, i);
            start = -1;
        }
    }

    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        printf("%c", s[i]);

    return 0;
}