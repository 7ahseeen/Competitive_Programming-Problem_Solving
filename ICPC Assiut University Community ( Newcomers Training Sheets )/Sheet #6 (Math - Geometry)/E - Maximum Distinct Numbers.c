#include <stdio.h>
#include <math.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    
    long long int num = (long double)(1+sqrt(1+8*n)) / 2;
    
    printf("%lld", num - 1);

    return 0;
}