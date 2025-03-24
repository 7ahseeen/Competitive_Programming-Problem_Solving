    #include <stdio.h>

    void change(int matrix[][500], int x, int y, int n){
        int tmp;
        
        for(int i = 0; i < n; i++){
            tmp = matrix[x][i];
            matrix[x][i] = matrix[y][i];
            matrix[y][i] = tmp;
        }
        
        for(int i = 0; i < n; i++){
            tmp = matrix[i][x];
            matrix[i][x] = matrix[i][y];
            matrix[i][y] = tmp;
        }
    }

    int main(){
        
        int matrix[500][500], n, x, y;

        scanf("%d%d%d", &n, &x, &y);

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                scanf("%d", &matrix[i][j]);

        change(matrix, x - 1, y - 1, n);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                printf("%d ", matrix[i][j]);

            printf("\n");
        }

        return 0;
    }