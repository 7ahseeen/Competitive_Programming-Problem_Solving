#include <stdio.h>
#include <math.h>

int main() {
    long long int n;
    double num = 1.0;
    
    scanf("%lld", &n);
    
    for(long long int i = 2; i <= n; i++)
        num += log10(i);
    
    printf("Number of digits of %lld! is %d", n, (int)floor(num));

    return 0;
}