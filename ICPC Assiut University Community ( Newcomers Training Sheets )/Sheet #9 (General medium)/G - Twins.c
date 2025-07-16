// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n, x, coins[100] = {0}, sum = 0, cnt = 0, myMoney = 0,
        max = 0;

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        
        if(max < x)
            max = x;
        
        sum += x;
        coins[x - 1]++;
    }
    
    int i = max - 1;
    
    do{
        if(coins[i] == 0){
            i--;
        }
        else{
            cnt++;
            coins[i]--;
            myMoney += i + 1;
        }
    }while(myMoney <= (sum / 2));
    
    printf("%d", cnt);

    return 0;
}