#include <stdio.h>
#include <string.h>

int main(){

    char str[10000];

    scanf("%[^\n]s", str);

    int len = strlen(str), pos[10000], index = 0, sum = 0, cnt = 0, j = 0;

    for(int i = 0; i < len; i++){
        if(str[i] == 'L')
            sum++;
        else
            sum--;

        if(sum == 0){
            pos[index++] = i;
            cnt++;
            sum = 0;
        }
    }

    printf("%d\n", cnt);

    for(int i = 0; i < index; i++){
        for(; j <= pos[i]; j++ )
            printf("%c", str[j]);
        printf("\n");
    }

    return 0;
}