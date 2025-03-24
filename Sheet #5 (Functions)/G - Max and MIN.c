#include <stdio.h>

void minimaxie(int num[], int n){

    int min = num[0], max = num[0];

    for(int i = 0; i < n; i++){
        if(num[i] > max)    max = num[i];
        if(num[i] < min)    min = num[i];
    }

    printf("%d %d", min, max);
}

int main(){

    int num[10000], n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    minimaxie(num, n);

    return 0;
}