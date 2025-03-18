#include <stdio.h>

int main(){

    int n, min, max, posmin, posmax, num[1000], tmp;

    scanf("%d", &n);

    min = 1000000;
    max = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        if(num[i] >= max){
            max = num[i];
            posmax = i; 
        }
        if(num[i] <= min){
            min = num[i];
            posmin = i; 
        }
    }

    tmp = num[posmin];
    num[posmin] = num[posmax];
    num[posmax] = tmp;

    for(int i = 0; i < n; i++)
        printf("%d ", num[i]);

    return 0;
}