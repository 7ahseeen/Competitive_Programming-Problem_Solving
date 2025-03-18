#include <stdio.h>


int main(){
    
    long long int n, sum;
    int x;

    sum = 0;

    scanf("%lld", &n);
    while(n){
        scanf("%1d", &x);
        sum += x;
        n--;
    }
    printf("%lld",sum);
    return 0;
}