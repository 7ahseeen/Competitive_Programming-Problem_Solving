#include <stdio.h>

long long int fact(int x){
    if(x > 1)
        return x * fact(x - 1);
    else
        return 1;
}

int main(){
    
    int x;
    
    scanf("%d", &x);
    
    printf("%lld", fact(x));
    
    return 0;
}