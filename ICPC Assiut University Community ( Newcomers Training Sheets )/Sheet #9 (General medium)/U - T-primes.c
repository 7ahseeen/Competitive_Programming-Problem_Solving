#include <stdio.h>
#include <math.h>

int main() {

    long long sieve[1000001] = {0};

    sieve[1] = 1;

    for (int i = 2; i <= 1000; i++) {
        for (int j = i * 2; j <= 1000000; j += i) {
            sieve[j] = 1;
        }
    }

    int n;

    scanf("%d", &n);

    while (n--) {
        long long x;
        scanf("%lld", &x);
        long long root = sqrt(x);

        if (root * root == x && sieve[root] == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}