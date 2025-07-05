#include <stdio.h>

int main(){
    
    int n, pi[100], i_pos[100];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &pi[i]);
        i_pos[pi[i] - 1] = i;
    }
    
    for(int i = 0; i < n; i++)
        printf("%d ", i_pos[i] + 1);
    
    
    return 0;
}