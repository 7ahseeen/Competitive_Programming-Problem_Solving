#include <stdio.h>


int main(){
    
    long long int n, x, tmp, dst = 0;
    
    char op;
    
    scanf("%lld %lld", &n, &x);
    
    while(n--){
        scanf(" %c %lld", &op, &tmp);
        
        if(op == '+')
            x += tmp;
        else{
            if(x >= tmp)
                x -= tmp;
            else
                dst++;
        }
    }
    
    printf("%lld %lld", x, dst);
    
    return 0;
}