#include <stdio.h>
#include <math.h>

#define buff 1e-9

int main()
{
    long long int x;
    
    scanf("%lld", &x);
    
    float lg_val = log2(x);
    
    if(lg_val - (long long)lg_val <= buff)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}