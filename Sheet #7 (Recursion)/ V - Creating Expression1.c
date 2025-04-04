#include <stdio.h>

int vExp(int iter, int x, int arr[], int sum, int n){
    if(iter == n){
        return sum == x;
    }
    return vExp(iter + 1, x, arr, sum - arr[iter], n) || vExp(iter + 1, x, arr, sum + arr[iter], n);
}

int main() {
    int n, x, arr[20];
    
    scanf("%d%d", &n, &x);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    if(vExp(1, x, arr, arr[0], n))
        printf("YES");
    else
        printf("NO");
    
    return 0;
}