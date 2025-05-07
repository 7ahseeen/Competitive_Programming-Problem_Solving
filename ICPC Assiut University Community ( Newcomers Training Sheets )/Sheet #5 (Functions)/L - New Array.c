#include <stdio.h>

void arrCp(int a[], int b[], int n, int start){
    for(int i = start; i < start + n; i++)
        b[i] = a[i - start];
}

void nArr(int a[], int b[], int c[], int n){
    arrCp(b, c, n, 0);
    arrCp(a, c, n, n);
}

int main(){

    int a[10000], b[10000], c[20000], n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    nArr(a, b, c, n);

    for(int i = 0; i < 2 * n; i++)
        printf("%d ", c[i]);

    return 0;
}