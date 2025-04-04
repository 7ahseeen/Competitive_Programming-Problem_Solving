#include <stdio.h>

void rprint(int n){
    if(n > 0){
        printf("I love Recursion\n");
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