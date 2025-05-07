#include <stdio.h>

void dNum(int n, int y){
    if(n){
     dNum(n / 10, y);
     printf("%d", n % 10);
     if(n != y)
        printf(" ");
    }
    else
        return;
}

int main(){
    
    int n, arr[10];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0)
            printf("0");
        else
            dNum(arr[i], arr[i]);
        
        if(i + 1 != n)
            printf("\n");
    }
    
    return 0;
}