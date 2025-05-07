#include <stdio.h>

int max(int n, int num[]){
    int m = num[0];

    for(int i = 0; i < n; i++)
        if(m < num[i])
            m = num[i];

    return m;
}

int min(int n, int num[]){
    int m = num[0];

    for(int i = 0; i < n; i++)
        if(m > num[i])
            m = num[i];

    return m;
}

int primeCount(int n, int num[]){
    int pCount = 0, isp;

    for(int i = 0; i < n; i++){
        if(num[i] == 1)
            continue;
        isp = 1;
        for(int j = 2; j * j <= num[i]; j++)
            if(num[i] % j == 0)
                isp = 0;
        if(isp)
            pCount++;
    }

    return pCount;
}

int palCount(int n, int num[]){
    int rev, tmp, pCount = 0;

    for(int i = 0; i < n; i++){
        tmp = num[i];
        rev = 0;

        while(tmp){
            rev = rev * 10 + tmp % 10;
            tmp /= 10;
        }

        if(rev == num[i])
            pCount++;
    }

    return pCount;
}

int mDiv(int n, int num[]){
    int max, div[100], pos;

    for(int i = 0; i < n; i++)
        div[i] = 2;

    for(int i = 0; i < n; i++){
        if(num[i] == 1){
            div[i] = 1;
            continue;
        }

        for(int j = 2; j < num[i]; j++)
            if(num[i] % j == 0)
                div[i]++;
    }

    pos = 0;
    max = div[pos];

    for(int i = 0; i < n; i++)
        if(div[i] > max){
            pos = i;
            max = div[pos];
        }
        else if(div[i] == max && num[i] > num[pos]){
            pos = i;
        }

    return num[pos];
}

int main(){

    int n, num[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    printf("The maximum number : %d\n", max(n, num));
    printf("The minimum number : %d\n", min(n, num));
    printf("The number of prime numbers : %d\n", primeCount(n, num));
    printf("The number of palindrome numbers : %d\n", palCount(n, num));
    printf("The number that has the maximum number of divisors : %d", mDiv(n, num));

    return 0;
}