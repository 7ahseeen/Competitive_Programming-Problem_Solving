#include <stdio.h>

int main() {
    int dist[3], min = 10000, max = 0;
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &dist[i]);
        
        if(dist[i] > max)
            max = dist[i];
            
        if(dist[i] < min)
            min = dist[i];
    }
    
    printf("%d", max - min);

    return 0;
}