#include <stdio.h>

int main(){

    int n, m, x, y, yes = 1;

    char  grid[101][101], tmp;

    scanf("%d%d", &n, &m);

    scanf("%c", &tmp);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%c", &grid[i][j]);
        }
        scanf("%c", &tmp);
    }

    scanf("%d%d", &x, &y);

    x--;    y--;

    int y_min = (y == 0 ? y : y - 1),
        y_max = (y == m - 1 ? y : y + 1),
        x_min = (x == 0 ? x : x - 1),
        x_max = (x == n - 1 ? x : x + 1);

    for(int i = x_min; i <= x_max; i++ )
        for(int j = y_min; j <= y_max; j++)
            if(!(x==i && y==j)){
                if(grid[i][j] != 'x'){
                    yes = 0;
                    break;
                }
            }

    if(yes) printf("yes");
    else    printf("no");

    return 0;
}
