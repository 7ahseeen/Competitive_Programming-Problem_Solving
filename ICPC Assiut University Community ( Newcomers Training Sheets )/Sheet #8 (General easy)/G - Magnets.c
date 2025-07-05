#include <stdio.h>

int main(){
    
    int n, cnt = 1;
    
    char c, prev;
    
    scanf("%d", &n);
    
    scanf(" %c%*c", &c);
    
    prev = c;
    
    for(int i = 1; i < n; i++){
        scanf(" %c%*c", &c);
        if(prev != c){
            prev = c;
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}