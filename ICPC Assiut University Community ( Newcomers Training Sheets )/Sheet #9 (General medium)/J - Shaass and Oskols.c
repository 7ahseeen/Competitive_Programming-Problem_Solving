#include <stdio.h>

void update(int lines[], int pos, int bird, int total){
    if(pos == 1){
        lines[pos] += (lines[pos - 1] - bird);
        lines[pos - 1] = 0;
        return;
    }
    
    if(pos == total){
        lines[pos - 2] += (bird - 1);
        lines[pos - 1] = 0;
        return;
    }
    
    lines[pos - 2] += (bird - 1);
    lines[pos] += (lines[pos - 1] - bird);
    lines[pos - 1] = 0;
}

int main(){
    
    int n, a[100];
    
    int m, x, y;
    
    scanf(" %d", &n);
    
    for(int i = 0; i < n; i++)
        scanf(" %d", &a[i]);
        
    scanf(" %d", &m);
    
    for(int i = 0; i < m; i++){
        scanf(" %d %d", &x, &y);
        update(a, x, y, n);
    }
    
    for(int i = 0 ; i < n; i++)
        printf("%d\n", a[i]);
    
    return 0;
}