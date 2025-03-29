#include <stdio.h>


int main(){

    char s[1001], t[1001];

    int m, n;

    scanf("%s", s);
    scanf("%s", t);

    for(m = 0; s[m] != '\0'; m++);
    for(n = 0; t[n] != '\0'; n++);

    printf("%d %d\n%s %s", m, n, s, t);

    return 0;
}