#include <stdio.h>

int main() {
    long long int n, fib[51];
    
    fib[1] = 0;
    fib[2] = 1;
    
    scanf("%lld", &n);
    
    for(int i = 3; i <= n; i++){
        fib[i] = fib[i-1] + fib[i - 2];
    }
    
    printf("%lld", fib[n]);

    
    return 0;
}