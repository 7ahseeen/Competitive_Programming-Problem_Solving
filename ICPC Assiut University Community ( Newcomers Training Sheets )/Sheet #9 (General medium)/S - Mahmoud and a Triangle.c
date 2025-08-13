#include <stdio.h>
#include <stdlib.h>

int qComp(const void *a, const void *b) {
    long long x = *(long long*)a;
    long long y = *(long long*)b;

    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;
}

int main() {

    long long n, vals[100000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &vals[i]);
    }

    qsort(vals, n, sizeof(vals[0]), qComp);

    for (int i = 0; i < n - 2; i++) {
        if (vals[i] + vals[i + 1] > vals[i + 2]) {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}