#include <stdio.h>

void rprint(int n){
    if(n > 0){
        printf("%d", n);
        if(n != 1)
            printf(" ");
        rprint(n - 1);
    }
    return;
}

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    rprint(n);
    
    return 0;
}