#include <stdio.h>

int main() {
   
    int n, tmp, last, secLast;

    scanf("%d", &n);

    if(n < 0){
        n = n * (-1);

        last = n % 10;
        secLast = (n / 10) % 10;

        if(last >= secLast)
            n = n / 10;
        else
            n = (n / 100) * 10 + (n % 10);

        n = n * (-1);
    }

    printf("%d", n);

    return 0;
}