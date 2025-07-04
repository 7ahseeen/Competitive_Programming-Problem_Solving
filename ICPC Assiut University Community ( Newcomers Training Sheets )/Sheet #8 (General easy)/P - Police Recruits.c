#include <stdio.h>

int main() {
   
    int n, x;

    int free = 0, crime = 0;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);

        if(x < 0){
            if(free)
                free--;
            else
                crime++;
        }
        else
            free += x;
    }
    printf("%d", crime);

    return 0;
}