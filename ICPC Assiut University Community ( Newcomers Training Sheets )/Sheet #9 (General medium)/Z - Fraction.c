#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {

    long long a,b,c,d, x, y;

    scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);

    printf("%lld/%lld", lcm(a,c), gcd(b,d));

    return 0;
}