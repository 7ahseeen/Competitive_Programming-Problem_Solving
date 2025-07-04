#include <stdio.h>
#include <string.h>

int contains(char str[], char x, int len){
    for(int i = 0; i < len; i++){
        if(str[i] == x)
            return 1;
    }

    return 0;
}

int main() {
    
    int n, k, len, cnt, good = 0;

    char filter[] = "0123456789";

    char str[50];

    scanf("%d %d", &n, &k);

    while(n--){
        scanf("%s", str);

        len = strlen(str);
        cnt = 0;

        for(int i = 0; i <=k; i++){
            cnt += contains(str, filter[i], len);
        }

        if(cnt == k + 1)
            good++;
    }

    printf("%d", good);

    return 0;
}