#include <stdio.h>

int main(){

    int n, num[1000], valid, t, cnt;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        cnt = 0;

        for(int i = 0; i < n; i++)
            scanf("%d", &num[i]);

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){

                valid = 1;

                for(int k = i; k < j; k++)
                    if(num[k+1] < num[k])   valid = 0;

                if(valid)   cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}