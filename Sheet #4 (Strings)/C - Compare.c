#include <stdio.h>


int main(){

    char s[21], t[21];

    int m, n, min, lex, i;

    scanf("%s", s);
    scanf("%s", t);

    for(m = 0; s[m] != '\0'; m++);
    for(n = 0; t[n] != '\0'; n++);
    
    min = m < n ? m : n;
    
    for(i = 0; i < min; i++){
        if(s[i] == t[i])    continue;
        else if( s[i] > t[i]){
            lex = 0;
            break;
        }
        else{
            lex = 1;
            break;
        }
    }

    if(i == min)
        if(min == n)
            printf("%s", t);
        else
            printf("%s", s);
    else
        printf("%s", lex ? s : t);

    return 0;
}