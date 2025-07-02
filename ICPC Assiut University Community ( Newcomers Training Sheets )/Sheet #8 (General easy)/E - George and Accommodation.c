#include <stdio.h>

int main(){
    
    int n, p, q, cnt = 0;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d %d", &p, &q);
        
        if(q-p >= 2)
            cnt++;
    }
    
    printf("%d", cnt);
    
    return 0;
}