#include <stdio.h>
#include <math.h>

int row, col;

void sumx(int a[][100], int b[][100], int r, int c){
    if(r == row)
        return;
        
    printf("%d ", a[r][c] + b[r][c]);
        
    if(c + 1 == col){
        printf("\n");
        sumx(a, b, r + 1, 0);
    }
    else
        sumx(a, b, r, c + 1);
    
}

int main() {
    int a[100][100], b[100][100];
    
    scanf("%d%d", &row, &col);
    
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
            
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
    
    sumx(a, b, 0, 0);

    return 0;
}