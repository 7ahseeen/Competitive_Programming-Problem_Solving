    #include <stdio.h>
    #include <math.h>

    long long int eq(int x, int n){

        if(n % 2 != 0)  n--;

        if(n < 2)
            return 0;

            return (long long int)pow(x, n) + eq(x, n - 2);
    }

    int main(){

        long long int x, n;

        scanf("%lld%lld", &x, &n);

        printf("%lld", eq(x, n));

        return 0;
    }
