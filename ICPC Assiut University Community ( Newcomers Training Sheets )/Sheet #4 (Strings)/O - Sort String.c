#include <stdio.h>

int chars[200] = {0};

int main(){

    int n, cnt = 1;
    char  tmp;

    scanf("%d", &n);

    getchar();

    while(n--){
        scanf("%c", &tmp);
        chars[tmp]++;
    }

    for(int i = 97; i <= 122; i++){
        if(chars[i] != 0){
            for(int j = 0; j < chars[i]; j++)
                printf("%c", i);
        }
    }

    return 0;
}