#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int freq[1001] = {0};
    int max_freq = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        freq[x]++;
        if (freq[x] > max_freq) max_freq = freq[x];
    }

    if (max_freq <= (n + 1) / 2)
        printf("YES");
    else
        printf("NO");

    return 0;
}
