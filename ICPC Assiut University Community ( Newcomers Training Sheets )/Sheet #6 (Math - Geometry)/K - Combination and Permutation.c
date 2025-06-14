#include <stdio.h>

int main() {
    unsigned long long a, b, nCr = 1, nPr = 1;

    scanf("%llu %llu", &a, &b);

    if (b == 0) {
        printf("1 1");
        return 0;
    }
    
    for (unsigned long long i = a; i > a - b; i--) {
        nPr *= i;
    }

    if (a == b) {
        printf("1 %llu", nPr);
        return 0;
    }

    nCr = nPr;
    for (unsigned long long i = 2; i <= b; i++) {
        nCr /= i;
    }

    printf("%llu %llu", nCr, nPr);

    return 0;
}