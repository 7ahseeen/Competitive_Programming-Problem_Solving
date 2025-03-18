#include <stdio.h>
     
int main(){
 
    int n;
    long long int nums[1000],tmp;
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++)
        scanf("%lld",&nums[i]);
 
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n - 1; j++){
                if(nums[j] > nums[j+1]){
                    tmp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = tmp;
                }
            }
        }
    for(int i = 0; i < n; i++){
        printf("%lld ",nums[i]);
    }
 
    return 0;
}