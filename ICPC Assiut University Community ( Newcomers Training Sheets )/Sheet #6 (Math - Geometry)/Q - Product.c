#include <stdio.h>

int main() {
    long long int l, n, m, product = 1;
    
    scanf("%lld%lld%lld", &l, &n, &m);
    
    for(long long int i = l; i <= n; i++)
        product = (product * i) % m;
    
    printf("%lld", product);

    return 0;
}