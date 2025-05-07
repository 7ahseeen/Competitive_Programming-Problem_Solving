#include <stdio.h>
#include <string.h>

int main() {
    
    int i, n, l1, l2, min;
    
    char s[51], t[51];
    
    scanf("%d", &n);
    
    while(n--){
        
        scanf("%s%s", s, t);
        
        l1 = strlen(s);
        l2 = strlen(t);
        
        min = l1 >= l2 ? l2 : l1;
        i = 0;
        
        for(i = 0; i < min; i++)    printf("%c%c", s[i], t[i]);
        
        if(l1 > l2){
            for(; i < l1; i++)  printf("%c", s[i]);
        }
        else{
            for(;i < l2; i++)   printf("%c", t[i]);
        }
        printf("\n");
    }
    
    

    return 0;
}