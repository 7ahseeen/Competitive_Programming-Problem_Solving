#include <stdio.h>

int main() {
    int n, arr[200], num = 0, can = 1;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2!=0) can = 0;
    }
    
    while(can){
        for(int i = 0; i < n; i++){
            if(arr[i]%2!= 0){
                can = 0;
                break;
            }
            else{
                arr[i]/= 2;
            }
        }
        if(can) num++;
    }
    
    printf("%d", num);
    
    return 0;
}