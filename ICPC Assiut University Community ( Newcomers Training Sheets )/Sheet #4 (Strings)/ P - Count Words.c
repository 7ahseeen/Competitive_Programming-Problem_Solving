#include <stdio.h>
#include <string.h>

char s[1000002];

int main(){

    scanf("%[^\n]s", s);

    int len = strlen(s), cnt = 0;


    for(int i = 0; i < len; i++){
        if((s[i] != ' ' && s[i] != '.' && s[i] != ',' && s[i] != '?' && s[i] != '!') && (i + 1 == len || s[i + 1] == ' ' || s[i + 1] == '.' || s[i + 1] == ',' || s[i + 1] == '?' || s[i + 1] == '!'))
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}