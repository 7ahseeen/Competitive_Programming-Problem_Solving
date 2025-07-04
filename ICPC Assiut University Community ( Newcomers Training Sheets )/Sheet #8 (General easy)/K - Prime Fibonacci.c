#include <stdio.h>

int main() {
    int t, n, fib_pr[50] = {0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0 };  

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);


        if(fib_pr[n - 1])
            printf("prime\n");
        else
            printf("not prime\n");
    }


    return 0;
}