#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10000];
    
    long long int x, len, calc = 0;
    
    scanf("%s", str);
    
    scanf("%lld", &x);
    
    len = strlen(str);
    
    for(int i = 0; i < len; i++){
        calc *= 10;
        calc += str[i] - '0';
        calc %= x;
    }
    
    if(calc)
        printf("NO");
    else
        printf("YES");
    
    return 0;
}