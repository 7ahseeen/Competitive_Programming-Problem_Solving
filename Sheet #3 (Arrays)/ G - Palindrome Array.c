#include <stdio.h>
 
int main(){
 
    int n, pal;
 
    pal = 1;
 
    long long int nums[100000];
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%lld",&nums[i]);
    }
 
    for(int i = 0; i < n ; i++){
        if(nums[i]!= nums[n-i-1])
            pal = 0;
    }
 
    if(pal)
        printf("YES");
    else
        printf("NO");
 
    return 0;
}