#include <stdio.h>

int max(int arr[], int n, int m){
    if(n >= 0){
    if(arr[n] > m)
        m = arr[n];
    }
    else
        return m;
    return max(arr, n - 1, m);
}

int main(){
    int n, arr[1000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("%d", max(arr, n - 1, arr[0]));
    
    return 0;
}