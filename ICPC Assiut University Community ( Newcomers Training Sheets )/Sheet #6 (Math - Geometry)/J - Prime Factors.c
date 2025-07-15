#include <stdio.h>
#include <math.h>

int main(){

    long long int N, cnt;

    scanf("%lld", &N); 
    
    int n = N;

    for(int i = 2; i <= N / 2; i++){
        cnt = 0;

        while(1){
            if(n % i == 0){
                cnt++;
                n /= i;
            }
            else
                break;
        }
        
        if(cnt > 0 && (n * pow(i, cnt)) != N)
            printf("*");
            
        if(cnt > 0){
            printf("(%d^%d)", i, cnt);
        }
        
        if(n == 0)
            break;
            
        if(n == N && i == N /2){
            printf("(%lld^1)", N);
        }
    }

    return 0;
}