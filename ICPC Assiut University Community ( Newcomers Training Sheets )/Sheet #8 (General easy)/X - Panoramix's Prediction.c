#include <stdio.h>

int isP(int n){
    if(n == 2 || n == 3 || n == 5){
        return 1;
    }
    else if(n % 2 == 0 || n % 3 == 0)
        return 0;
    
    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    
    return 1;
}

int main(){
    
    int n, m;
    
    scanf(" %d %d", &n, &m);
    
    if(!isP(m))
    {
        printf("NO");
        return 0;
    }
    
    for(int i = n + 1; i < m; i++){
        if(isP(i)){
            printf("NO");
            return 0;
        }
    }
    
    printf("YES");
    
    return 0;
}