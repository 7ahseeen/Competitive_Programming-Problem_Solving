#include <stdio.h>

int main() {

    int n, m;

    scanf(" %d %d", &n, &m);

    int steps;

    if (n % 2 == 0) {
        steps = n / 2;
    }
    else {
        steps = (n + 1) / 2;
    }

    for (int i = steps; i <= n; i++) {
        if (i % m == 0) {
            printf("%d ", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}