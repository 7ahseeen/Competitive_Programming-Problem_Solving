#include <stdio.h>
     
int main(){
 
    int n, pos;
 
    long long int x, nums[100000];
 
    pos = -1;
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&nums[i]);
    }
 
    scanf("%lld", &x);
 
    for(int i = 0; i < n; i++){
        if(nums[i]==x){
            pos = i;
            break;
        }
    }
 
    printf("%d", pos);
    return 0;
}