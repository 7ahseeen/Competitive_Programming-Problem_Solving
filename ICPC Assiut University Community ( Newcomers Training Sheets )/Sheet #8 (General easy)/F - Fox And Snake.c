#include <stdio.h>

int main(){
    
    int n, m, dir = 1;
    
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i % 2 == 0)
                printf("#");
            else{
                if(dir == 1 && j + 1 == m){
                    printf("#");
                }
                else if(dir == 0 && j == 0){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
        }
        if( i % 2 != 0){
            dir = dir ? 0 : 1;
        }
        printf("\n");
    }
    
    return 0;
}