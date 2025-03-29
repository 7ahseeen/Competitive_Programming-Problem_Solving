#include <stdio.h>
#include <string.h>

int main(){

    char buffer, str[10001], sub[] = "EGYPT";

    scanf("%[^\n]s", str);

    int len = strlen(str), slen = 5, main_itr = 0, i, j;

    for(; main_itr < len; main_itr++){

        i = main_itr;

        for(j = 0; j < slen; i++, j++){
            if(str[i] != sub[j])
                break;
        }

        if(j == slen){
            printf(" ");
            main_itr += (j - 1);
        }
        else
            printf("%c", str[main_itr]);
    }

    return 0;
}