#include <stdio.h>

int main() {
    
    char cake[11][11];
    
    int r, c, contains, ck, eaten = 0;
    
    scanf("%d %d", &r, &c);
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf(" %c", &cake[i][j]);
        }
    }
    
    for(int i = 0; i < r; i++){
        ck = 0;
        
        for(int j = 0; j < c; j++){
            if(cake[i][j] != 'S'){
                ck++;
            }
            else
                break;
        }
        if(ck == c){
            for(int j = 0; j < c; j++){
                if(cake[i][j] != 'x'){
                    eaten++;
                    cake[i][j] = 'x';
                }
            }
        }
    }
    
    for(int i = 0; i < c; i++){
        ck = 0;
        
        for(int j = 0; j < r; j++){
            if(cake[j][i] != 'S'){
                ck++;
            }
            else
                break;
        }
        if(ck == r){
            for(int j = 0; j < r; j++){
                if(cake[j][i] != 'x'){
                    eaten++;
                    cake[j][i] = 'x';
                }
            }
        }
    }
    
    printf("%d", eaten);

    return 0;
}