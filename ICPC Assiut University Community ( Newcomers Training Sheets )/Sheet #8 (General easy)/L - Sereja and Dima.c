#include <stdio.h>

int main() {
    int n, i, j, turn = 0, sereja = 0, dima = 0;
    int cards[1000];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        scanf("%d", &cards[i]);
    
    i = 0;
    j = n - 1;
    
    while(i <= j){
        if(cards[i] > cards[j]){
            if(turn == 0)
                sereja += cards[i];
            else
                dima += cards[i];
            i++;
        }
        else{
            if(turn == 0)
                sereja += cards[j];
            else
                dima += cards[j];
            j--;
        }
        
        turn = (turn == 1) ? 0 : 1;
    }
    
    printf("%d %d", sereja, dima);

    return 0;
}