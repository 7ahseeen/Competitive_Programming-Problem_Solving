#include <stdio.h>
     
int main(){
 
    int n;
 
    long long int x, nums[1000];
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&nums[i]);
    }
 
    for(int i = 0; i < n; i++){
        if(nums[i] <= 10)
        printf("A[%d] = %lld\n",i,nums[i]);
    }
 
    return 0;
}