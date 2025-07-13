#include <stdio.h>
#include <string.h>

int res[11][11], mat[11][11];
int n, m;

int maxPath(int i, int j){
    if(i < 1 || j < 1)
        return -1000000;
    if(res[i][j] != -1)
        return res[i][j];
        
    int x = maxPath(i - 1, j),
        y = maxPath(i, j - 1);
        
    res[i][j] = mat[i][j] + (x > y ? x : y);
    
    return res[i][j];
}

int main(){
    scanf(" %d %d", &n, &m);
    
    memset(res, -1, sizeof(res));
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf(" %d", &mat[i][j]);
            
    res[1][1] = mat[1][1];
            
    printf("%d", maxPath(n, m));
    
    
    return 0;
}