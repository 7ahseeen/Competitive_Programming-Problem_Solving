#include <stdio.h>

void parr(int arr[], int n){
    if(n >= 0){
        printf("%d ", arr[n]);
        parr(arr, n - 2);
    }
}


int main(){
    int n, arr[10000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    if(n % 2 == 0)
        n--;
        
    parr(arr, n - 1);
    
    return 0;
}