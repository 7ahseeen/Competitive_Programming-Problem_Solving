#include <stdio.h>

typedef struct{
    int r1;
    int r2;
} coder;

int main(){
    
    int n, ascending = 0, rated = 0, i;
    
    coder arr[5000];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d %d", &arr[i].r1, &arr[i].r2);
        if(arr[i].r1 != arr[i].r2){
            rated = 1;
        }
    }
    
    if(rated == 1)
        printf("rated");
    else{
        for(i = 0; i < n - 1; i++){
            if(arr[i].r2 < arr[i + 1].r2){
                printf("unrated");
                return 0;
            }
        }
        printf("maybe");
    }
    
    return 0;
}