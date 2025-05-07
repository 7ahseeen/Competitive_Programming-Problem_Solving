#include <stdio.h>

double avg(int n, int arr[], int x){
    if(n == 0)
        return arr[0];
    
    if(n + 1 != x)
        return arr[n] + avg(n - 1, arr, x);
        
    return (arr[n] + avg(n - 1, arr, x)) / x;
}

int main(){
    
    int n, arr[100];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("%lf", avg(n - 1, arr, n));
    
    return 0;
}