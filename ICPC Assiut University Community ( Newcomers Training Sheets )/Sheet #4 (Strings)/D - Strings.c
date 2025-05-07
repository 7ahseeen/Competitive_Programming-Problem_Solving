#include <stdio.h>
     
     
int main(){
 
    char s[1001], t[1001], tmp;
 
    int m, n;
 
    scanf("%s", s);
    scanf("%s", t);
 
    for(m = 0; s[m] != '\0'; m++);
    for(n = 0; t[n] != '\0'; n++);
 
    printf("%d %d\n%s%s\n", m, n, s, t);
    
    tmp = s[0];
    s[0] = t[0];
    t[0] = tmp;
    
    printf("%s %s", s, t);
 
    return 0;
}