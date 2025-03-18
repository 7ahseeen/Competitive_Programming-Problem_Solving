#include <stdio.h>
     
int main(){
 
    int n;
 
    long long int x, nums[1000];
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&x);
        if(x > 0) nums[i] = 1;
        else if (x < 0) nums[i] = 2;
        else nums[i] = 0;
    }
 
    for(int i = 0; i < n; i++){
        printf("%lld ",nums[i]);
    }
 
    return 0;
}