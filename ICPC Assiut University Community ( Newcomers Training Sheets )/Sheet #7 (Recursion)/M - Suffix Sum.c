#include <stdio.h>

long long int sum(int n, int arr[], int start){
    if(n == start)
        return arr[start];
    return arr[n] + sum(n - 1, arr, start);
}

int main(){
    
    int n, m, arr[100000];
    
    scanf("%d%d", &n, &m);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("%lld", sum(n - 1, arr, n - m));
    
    return 0;
}