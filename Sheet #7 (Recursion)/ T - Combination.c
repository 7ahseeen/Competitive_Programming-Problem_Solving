#include <stdio.h>

long long record[100][100]= {0};

long long int comb(int n, int r){
        if(r > n)
            return 0;
    
        if(n == r || r == 0){
        record[n][r] = 1;
        return 1;
    }
    
    if(record[n][r] != 0)
        return record[n][r];
    
    record[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
    
    return record[n][r];
}

int main(){
    int n, r;
    
    scanf("%d%d", &n, &r);
    
    printf("%lld", comb(n, r));
    
    return 0;
}