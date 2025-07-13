#include <stdio.h>
#include <string.h>

int val[20], wt[20], W, N;

int result[20][100];

int kpsc(int n, int w){
    if(n == N || w == 0)
        return 0;
        
    if(result[n][w] != -1)
        return result[n][w];
        
    if(wt[n] > w)
        result[n][w] = kpsc(n + 1, w);
    else{
        int x = val[n] + kpsc(n + 1, w - wt[n]),
            y = kpsc(n + 1, w);
            
        result[n][w] = x > y ? x : y;
    }
    
    return result[n][w];
}

int main() {
    
    scanf(" %d %d", &N, &W);
    
    memset(result, -1, sizeof(result));
    
    for(int i = 0; i < N; i++)
        scanf(" %d %d", &wt[i], &val[i]);
    
    printf("%d", kpsc(0, W));

    return 0;
}