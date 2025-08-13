#include <stdio.h>

int main() {

    int n, t;

    scanf(" %d %d", &n, &t);

    int t_len = 0, x = t;

    while (x > 0) {
        t_len++;
        x /= 10;
    }

    if (t_len > n) {
        printf("-1");
        return 0;
    }

    if (n == 1) {
        printf("%d", t);
        return 0;
    }
    else {
        printf("%d", t);
        for (int i = 1; i <= n  - t_len; i++) {
            printf("0");
        }
    }

    return 0;
}