#include <stdio.h>
     
int main(){
 
    int n, pos;
 
    long long int min, nums[1000];
 
    scanf("%d", &n);
 
    min = 100000;
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&nums[i]);
    }
 
    for(int i = 0; i < n; i++){
        if(nums[i] < min)
 
        {
            pos = i;
            min = nums[i];
        }
    }
 
    printf("%lld %d",nums[pos],pos+1);
 
 
    return 0;
}