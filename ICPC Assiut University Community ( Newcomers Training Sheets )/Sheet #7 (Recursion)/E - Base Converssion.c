#include <stdio.h>

void toBin(int n){
    if(n / 2 == 0){
        printf("%d", n % 2);
        return;
    }
    else{
        toBin(n / 2);
        printf("%d", n % 2);
    }

}

int main(){
    
    int n, num;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &num);
        toBin(num);
        
        printf("\n");
    }
    
    return 0;
}