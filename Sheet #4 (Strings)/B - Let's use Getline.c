#include <stdio.h>


int main(){

    char s[1000001];

    fgets(s, sizeof(s), stdin);

    for(int m = 0; s[m] != '\\'; m++)
        printf("%c",s[m]);

    return 0;
}