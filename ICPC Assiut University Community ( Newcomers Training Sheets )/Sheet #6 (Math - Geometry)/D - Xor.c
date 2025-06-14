#include <stdio.h>
#include <math.h>

long long int a, b, q, sum;

int main(){
    
    scanf("%lld%lld%lld", &a, &b, &q);
    
    q = q % 3;
    
    if(q == 1){
        sum = a;
    }
    else if(q == 2)
        sum = b;
     else
     	sum = a ^ b;
    
    printf("%lld", sum);
    
    return 0;
}