#include <stdio.h>

int main() {
    long long int n, m, x, sum1 = 0, sum2 = 0;
    
    scanf("%lld %lld", &n, &m);
    
    for(int i = 0; i < n; i++){
        scanf("%lld", &x);
        sum1 += x;
    }
    
    for(int i = 0; i < m; i++){
        scanf("%lld", &x);
        sum2 += x;
    }
    
    if(sum1 == sum2)
        printf("Yes");
    else
        printf("No");

    return 0;
}