#include <stdio.h>

void shift0(int num[], int n){
    int j = 0;

    for(int i = 0; i < n; i++)
        if(num[i] != 0)
            num[j++] = num[i];

    for(; j < n; j++)
        num[j] = 0;
}

int main(){
    int num[1000], n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    shift0(num, n);

    for(int i = 0; i < n; i++)
        printf("%d ", num[i]);

    return 0;
}