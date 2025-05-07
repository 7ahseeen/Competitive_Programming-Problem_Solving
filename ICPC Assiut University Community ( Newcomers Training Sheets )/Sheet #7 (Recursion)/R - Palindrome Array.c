#include <stdio.h>

int isPal(int arr[], int n, int iter){
    if(n == 0)
        return 1;
    
    if(n <= iter){
        return 1;
    }
    else{
        if(arr[n] != arr[iter])
            return 0;
        else
            return isPal(arr, n - 1, iter + 1);
    }
}

int main(){
    int arr[100000], n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    if(isPal(arr, n - 1, 0)){
        printf("YES");
    }
    else
        printf("NO");
    
    return 0;
}