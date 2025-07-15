#include <stdio.h>

#define LLD long long int

LLD min(LLD a, LLD b){
    return a > b ? b : a;
}

LLD max(LLD a, LLD b){
    return a > b ? a : b;
}

int main() {
    int T, N;
    LLD area,
        x1, y1, x2, y2,
        maxX, maxY, minX, minY;

    scanf(" %d", &T);
    
    for(int i = 1; i <= T; i++){
        scanf("%d", &N);
        
        scanf(" %lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        
        maxX = x1, maxY = y1, minX = x2, minY = y2;
         
        for(int j = 1; j < N; j++){
            scanf(" %lld %lld %lld %lld", &x1, &y1, &x2, &y2);
            
            maxX = max(maxX, x1);
            maxY = max(maxY, y1);
            minX = min(minX, x2);
            minY = min(minY, y2);
        }
        
        if(minX > maxX && minY > maxY)
            area = (minX - maxX) * (minY - maxY);
        else
            area = 0;
        
        printf("Case #%d: %lld\n", i, area);
    }

    return 0;
}