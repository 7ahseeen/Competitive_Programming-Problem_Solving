#include <stdio.h>

int main() {
    
    long long int m, n, a, b, gcd;
    
    scanf("%lld%lld", &m, &n);
    
    a = m;
    b = n;
    
    if(a == b){
        gcd = a;
    }
    else
        while(a % b != 0 && b % a != 0){
            if(a > b){
                if( a % b == 0){
                    break;
                }
                else{
                    a = a % b;
                }
            }
            else{
                if( b % a == 0){
                    break;
                }
                else{
                    b = b % a;
                }
            }
        }
    
    gcd = a > b ? b : a;
    
    printf("%lld %lld", gcd, m * n / gcd);

    return 0;
}