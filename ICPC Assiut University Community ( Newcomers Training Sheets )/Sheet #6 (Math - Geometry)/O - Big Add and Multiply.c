#include <stdio.h>
#include <string.h>


int num[] = {9,9,9,9}, given[1000000] = {0};
int addRes[1000001], mulRes[1000001];
int N, carry, sum, mul;

char str[1000001];

int len;

void tostr(){
    for(int i = 0; i < len; i++){
        given[i] = str[i] - '0';
        addRes[i] = given[i];
    }
}

void multp(){
    memset(mulRes, 0, sizeof(mulRes));
    
    N = 3 + len;

    mul = 1;
    
    for(int j = 0; j < 4; j++){
        carry = 0;
        
        for(int i = 0; i < len; i++){
            mul = num[j] * given[len - 1 - i] + carry + mulRes[j + i];
            mulRes[j + i] = mul % 10;
            carry = mul / 10;
        }
        
        if(carry)
            mulRes[len + j] += carry;
    }
    
    while(mulRes[N] == 0 && N >= 0)
        N--;
        
    if(N < 0){
        printf("0");
        return;
    }
        
    while(N >= 0){
        printf("%d", mulRes[N]);
        N--;
    }
}

void adding(){
    
    memset(addRes, 0, sizeof(addRes));

    int j = 0, carry = 0;
    
    for(int i = len - 1; i >= 0; i--){
        sum = given[i];
        
        if(j < 4){
            sum += num[j++];
        }
        
        sum += carry;
        
        if(sum > 9){
            carry = sum / 10;
            sum %= 10;
        }
        else
            carry = 0;
        
        addRes[i] = sum;
    }
    
    if(carry)
        printf("%d", carry);
    
    for(int i = 0; i < len; i++)
        printf("%d", addRes[i]);
        
    printf("\n");
}

int main(){
    
    scanf("%s", str);
    
    
    len = strlen(str);
    
    // add leading zeros to given when len < 4
    if(len < 4){
        for(int i= 3, j = len - 1; i >= 4 - len; i--, j--){
            given[i] = str[j] - '0';
        }
        len = 4;
    }
    else
        tostr();
    
    adding();
    multp();
    
    return 0;
}