#include <stdio.h>
#include <math.h>
#include <string.h>

char toChar(int n){
    if(n >= 0 && n <= 9)
        return '0' + n;
        
    return 'A' + n - 10;
}

int toInt(char n){
    if(n >= '0' && n <= '9')
        return n - '0';
    
    return n - 'A' + 10;
}

long long int toDec(char num[], int base){
    long long dec = 0;
    
    int len = strlen(num);
    
    for(int i = len - 1; i >= 0; i--)
        dec += (toInt(num[i]) * pow(base, len - i - 1));
    
    return dec;
}

void toX(int num, char ans[], int base){
    if(num == 0) {
        ans[0] = '0';
        ans[1] = '\0';
        
        return;
    }
    
    int i = 0;
    
    while(num > 0){
        ans[i++] = toChar(num % base);
        
        num /= base;
    }
    
    ans[i] = '\0';
}

int main(){
    
    int T, X;
    
    scanf("%d", &T);
    
    if(T == 1){
        char num[10000];
        scanf(" %s", num);
        scanf("%d", &X);
        
        printf("%lld", toDec(num, X));
    }
    else{
        long long int num, len;

        char ans[100000];
        
        scanf("%lld", &num);
        scanf("%d", &X);
        
        toX(num, ans, X);
        
        len = strlen(ans);
        
        char tmp;
        
        for(int i = 0; i < len / 2; i++){
            tmp = ans[i];
            ans[i] = ans[len - 1 - i];
            ans[len - 1 - i] = tmp;
        }
        
        printf("%s", ans);
    }
    
    return 0;
}