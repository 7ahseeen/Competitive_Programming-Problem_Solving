#include <stdio.h>
     
     
int main(){
 
    char s[1000001];
    
    long long sum = 0;
    
    scanf("%s", s);
    
    for(int i = 0; s[i] != '\0'; i++)
        sum += (s[i] - 48);
        
    printf("%lld", sum);
 
    return 0;
}