#include <stdio.h>

int main() {
    
    long long int n, i;
    
    int p = 1;
    
    scanf("%lld", &n);
    
    if(n < 2)
        p = 0;
    else if( n < 4);
    else if(n % 2 == 0 || n % 3 == 0)
        p = 0;
        
        
    for(i = 5; i * i <= n && p; i += 6){
        if(n % i == 0 || n % (i + 2) == 0)
            p = 0;
    }
    
    if(p)
        printf("YES");
    else
        printf("NO");

    return 0;
}