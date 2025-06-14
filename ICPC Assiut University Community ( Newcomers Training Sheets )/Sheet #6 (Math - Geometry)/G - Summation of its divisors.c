#include <stdio.h>

int main() {
    long long int n, i, sum = 0;
    
    scanf("%lld", &n);
    
    for(i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            
            if(i * i != n)
                sum += (n / i);
        }
    }
    
    printf("%lld", sum);

    return 0;
}