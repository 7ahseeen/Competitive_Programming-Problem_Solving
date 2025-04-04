#include <stdio.h>

void rprint(int i, int n){
    if(i <= n){
        printf("%d\n", i);
        rprint(i + 1, n);
    }
    return;
}

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    rprint(1, n);
    
    return 0;
}