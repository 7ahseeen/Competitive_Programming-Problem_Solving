#include <stdio.h>

int path(long long int n, long long int current){
    if(n == current)
        return 1;
    else if(n < current)
        return 0;
    else
        return path(n, current * 10) || path(n, current * 20);
}

int main() {
    long long int t, n;
    
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        
        if(path(n, 1))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}