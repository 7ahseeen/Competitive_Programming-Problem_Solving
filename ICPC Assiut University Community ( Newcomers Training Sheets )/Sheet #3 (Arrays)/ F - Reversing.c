#include <stdio.h>
     
int main(){
 
    int n, pos;
 
    long long int nums[1000];
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&nums[i]);
    }
 
    for(int i = n-1; i >= 0; i--){
        printf("%lld ",nums[i]);
    }
 
    return 0;
}