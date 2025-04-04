#include <stdio.h>

long long int sum(int n, int arr[]){
    if(n == 0)
        return arr[0];
    return arr[n] + sum(n - 1, arr);
}

int main(){
    
    int n, arr[1000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("%lld", sum(n - 1, arr));
    
    return 0;
}