#include <stdio.h>

int isPrime(int x, int div){
    if(x < 4){
        if(x == 1)  return 0;
        else    return 1;
    }

    if(x % div == 0)    return 0;

    if(div * div > x) return 1;

    return isPrime(x, div + 1);
}


int main(){

    int t, num;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);
        if(isPrime(num, 2))    printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}