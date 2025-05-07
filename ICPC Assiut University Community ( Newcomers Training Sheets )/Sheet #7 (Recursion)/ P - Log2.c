#include <stdio.h>
#include <math.h>

long long lg(long long n){
    if(n == 1)
        return 0;
    return 1 + lg(n / 2);
}

int main() {
    long long n;
    
    scanf("%lld", &n);
    
    printf("%lld", lg(n));

    return 0;
}