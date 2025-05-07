#include <stdio.h>
#include <math.h>

int cnt(int n){
    if(n == 1)
        return 0;
        
    if(n % 2 == 0)
        return 1 + cnt(n / 2);
    else
        return 1 + cnt(3 * n + 1);
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d", cnt(n) + 1);

    return 0;
}