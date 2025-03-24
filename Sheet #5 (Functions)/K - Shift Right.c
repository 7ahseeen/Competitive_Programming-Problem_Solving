#include <stdio.h>

void shift(int num[], int n, int x){
    if(x){
        int tmp = num[n - 1];
        for(int i = n; i > 0; i--)
            num[i] = num[i - 1];

        num[0] = tmp;
    }
    else    return;

    shift(num, n, x - 1);
}

int main(){

    int n, x, num[10000];

    scanf("%d%d", &n, &x);

    x = x % n;

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    shift(num, n, x);

    for(int i = 0; i < n; i++)
        printf("%d ", num[i]);

    return 0;
}