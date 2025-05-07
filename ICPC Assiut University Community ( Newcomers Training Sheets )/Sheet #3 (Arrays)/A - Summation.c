#include <stdio.h>
     
int main(){
 
    int n;
 
    long long int sum, nums;
 
    sum = 0;
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&nums);
        sum += nums;
    }
 
    printf("%lld", sum < 0 ? -(sum) : sum);
 
    return 0;
}