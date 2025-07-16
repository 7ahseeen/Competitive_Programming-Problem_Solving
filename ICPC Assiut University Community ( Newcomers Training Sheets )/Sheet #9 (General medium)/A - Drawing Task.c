#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, m, q;
    int r1, r2, c1, c2, tmp;
    char c, grid[100][100];
    
    scanf("%d %d %d", &n, &m, &q);
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            grid[i][j] = '.';
    
    while(q--){
        scanf("%d %d %d %d %c", &r1, &c1, &r2, &c2, &c);
        
        if(r1 > r2){
            tmp = r1;
            r1 = r2;
            r2 = tmp;
        }
        
        if(c1 > c2){
            tmp = c1;
            c1 = c2;
            c2 = tmp;
        }
    
        for(int i = r1 - 1; i < r2; i++)
            for(int j = c1 - 1; j < c2; j++)
                grid[i][j] = c;
    }
    
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            printf("%c", grid[i][j]);
        }
        if(i + 1 != n)
            printf("\n");
    }
            
    return 0;
}