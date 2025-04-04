#include <stdio.h>

void pmax(int arr[], int iter, int n, int max){
    if(iter <= n){
        if(arr[iter] > max)
            max = arr[iter];
            
        printf("%d ", max);
        pmax(arr, iter + 1, n, max);
    }
}

int main() {
    int arr[100000], n;
    
    scanf("%lld", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    pmax(arr,0, n - 1, arr[0]);

    return 0;
}