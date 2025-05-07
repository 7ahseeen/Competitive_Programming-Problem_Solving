#include <stdio.h>

int main(){

    int n, num[1000], max, t;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
            scanf("%d", &num[i]);

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                max = num[j];

                for(int k = i; k <= j; k++)
                    if(max < num[k])    
                        max = num[k];

                printf("%d ", max);
            }
        }
        printf("\n");
    }
    return 0;
}