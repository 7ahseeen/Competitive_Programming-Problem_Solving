#include <stdio.h>

int main() {
    
    long long int a, b, x, tmp;
    
    scanf("%lld%lld%lld", &a, &b, &x);
    
    if(b < a){
        tmp = a;
        a = b;
        b = tmp;
    }
    
    a = (a + x - 1) / x * x;
    
    b = (b / x) * x;
    
    printf("%lld", (((b - a) / x + 1) * (a + b) ) / 2);

    return 0;
}