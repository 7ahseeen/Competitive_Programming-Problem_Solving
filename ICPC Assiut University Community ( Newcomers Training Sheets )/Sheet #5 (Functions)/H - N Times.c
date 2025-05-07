#include <stdio.h>

void printc(char c, int n){
    if(n != 0){
        printf("%c ", c);
        printc(c, n - 1);
    }
}

int main(){

    int x, t;
    char c;

    scanf("%d", &t);

    while(t--){
        scanf("%d %c", &x, &c);
        printc(c, x);
        printf("\n");
    }

    return 0;
}