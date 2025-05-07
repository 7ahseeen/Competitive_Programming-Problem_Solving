#include <stdio.h>

int main(){

    int n, occ;
    long long int nums[1000], min;

    scanf("%d", &n);

    occ = 0;

    min = 100000000;

    for(int i = 0; i < n; i++)
        scanf("%lld",&nums[i]);

    for(int i = 0; i < n ; i++){
        if(nums[i] < min ){
            min = nums[i];
            occ = 1;
        }
        else if( nums[i] == min)
            occ++;
    }

    if(occ != 0 && occ%2==0)
        printf("Unlucky");
    else
        printf("Lucky");
    return 0;
}
