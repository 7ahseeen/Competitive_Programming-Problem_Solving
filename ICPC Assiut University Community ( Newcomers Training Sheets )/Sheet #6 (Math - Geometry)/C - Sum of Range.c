#include <stdio.h>
#include <math.h>

int main(){
    
    long long int m, n, tmp, sum1 = 0, sum2 = 0, sum3 = 0;
    
    scanf("%lld%lld", &m, &n);
    
    if(m > n){
        tmp = m;
        m = n;
        n = tmp;
    }
    
    sum1 = n * (n + 1) / 2 - m * (m + 1) / 2 + m;
    
    sum2 = n/2 * (n/2 + 1) - m/2 * (m/2 + 1) + (m % 2 == 0 ? m : 0);
    
    sum3 = sum1 - sum2;
    
    printf("%lld\n%lld\n%lld", sum1, sum2, sum3);
    
    return 0;
}