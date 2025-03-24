#include <stdio.h>

double avg(double num[], int n, int i, double sum){
    if(i == n)  
        return sum / n;

    return avg(num, n, i + 1, sum + num[i]);
}

int main(){

    int n;

    double num[10000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%lf", &num[i]);

    printf("%lf", avg(num, n, 0, 0));

    return 0;
}