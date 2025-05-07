#include <stdio.h>

int main(){

    int n, cnt = 1;
    char str[100001];

    scanf("%d", &n);

    scanf("%s", str);

    for(int i = 0; i < n - 1; i++){
        if(str[i] != str[i + 1])
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}