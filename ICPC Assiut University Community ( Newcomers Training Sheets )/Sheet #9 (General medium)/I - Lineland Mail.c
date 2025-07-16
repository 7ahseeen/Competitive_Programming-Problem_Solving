#include <stdio.h>

int main(){
    
    int n, cities[200000], min, max;
    
    scanf(" %d", &n);
    
    for(int i = 0; i < n; i++){
        scanf(" %d", &cities[i]);
    }
    
    printf("%d %d\n", cities[1] - cities[0], cities[n - 1] - cities[0]);

    for(int i = 1; i < n - 1; i++){
        min = cities[i] - cities[i - 1] < cities[i + 1] - cities[i] ?  cities[i] - cities[i - 1] :  cities[i + 1] - cities[i];
        
        max = cities[n - 1] - cities[i] > cities[i] - cities[0] ? 
            cities[n - 1] - cities[i] : cities[i] - cities[0];
        printf("%d %d\n", min, max);
    }
    
    printf("%d %d\n", cities[n - 1] - cities[n - 2], cities[n - 1] - cities[0]);

    return 0;
}