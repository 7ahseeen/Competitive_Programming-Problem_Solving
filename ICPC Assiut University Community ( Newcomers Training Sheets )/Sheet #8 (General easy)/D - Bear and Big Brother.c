#include <stdio.h>

int main() {
    
    int year = 0, l, b;
    
    scanf("%d %d", &l, &b);
    
    while(l <= b){
        year++;
        l *= 3;
        b *= 2;
    }
    
    printf("%d", year);

    return 0;
}