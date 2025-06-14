#include <stdio.h>

void pyramid(int n, int i){
    if(i > 0){
        for(int j = 0; j < n - i; j++)
            printf(" ");
        for(int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
        pyramid(n, i - 1);
    }
}


int main(){
    int n;
    
    scanf("%d", &n);
    
    pyramid(n, n);
    
    return 0;
}