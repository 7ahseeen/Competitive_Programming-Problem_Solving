#include <stdio.h>

int pos[10000] = {0}, neg[10000] = {0};

int cnt(int num[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(num[i] < 0 && neg[(-1) * num[i]] == 0){
            neg[(-1) * num[i]] = 1;
            count++;
        }
        else if(num [i] >= 0 && pos[num[i]] == 0){
            pos[num[i]] = 1;
            count++;
        }
    }
    return count;
}

int main(){

    int n, num[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    printf("%d", cnt(num, n));

    return 0;
}