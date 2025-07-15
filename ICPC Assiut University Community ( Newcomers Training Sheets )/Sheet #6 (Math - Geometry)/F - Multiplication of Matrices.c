#include <stdio.h>


int main(){
    
    int matA[100][100], matB[100][100], res[100][100] = {0};
    
    int a1, b1, a2, b2;
    
    scanf("%d %d", &a1, &b1);
    
    for(int i = 0; i < a1; i++)
        for(int j = 0; j < b1; j++)
            scanf("%d", &matA[i][j]);
            
    scanf("%d %d", &a2, &b2);
    
    for(int i = 0; i < a2; i++)
        for(int j = 0; j < b2; j++)
            scanf("%d", &matB[i][j]);
            
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b2; j++){
            for(int k = 0; k < b1; k++){
                res[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b2; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}