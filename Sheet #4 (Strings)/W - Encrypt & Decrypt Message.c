#include <stdio.h>
#include <string.h>

int main(){

    char Key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
         original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789",
         arr1[128] = {0},
         arr2[128] = {0},
         str[1000001];

    int len = strlen(original), q, slen;

    for(int i = 0; i < len; i++)
        arr1[(int)original[i]] = Key[i];
    
        for(int i = 0; i < len; i++)
        arr2[(int)Key[i]] = original[i];

    scanf("%d", &q);

    getchar();

    scanf("%[^\n]s", str);

    slen = strlen(str);

    if(q == 1){
        for(int i = 0; i < slen; i++)
            printf("%c", arr1[(int)str[i]]);
    }
    else{
        for(int i = 0; i < slen; i++)
            printf("%c", arr2[(int)str[i]]);
    }

    return 0;
}