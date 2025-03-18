#include <stdio.h>

int main(){

    int n, t;
    long long int nums[100], min;

    scanf("%d", &t);

    while(t){
    scanf("%d", &n);

    min = 100000000;

    for(int i = 0; i < n; i++)
        scanf("%lld",&nums[i]);

    for(int i = 1; i <= n ; i++){
        for(int j = i+1; j <= n ; j++){
                if((nums[i-1]+nums[j-1]+j-i) < min){
                    min = (nums[i-1]+nums[j-1]+j-i);
                }
            }
        }

        printf("%lld\n",min);
        t--;
    }

    return 0;
}
