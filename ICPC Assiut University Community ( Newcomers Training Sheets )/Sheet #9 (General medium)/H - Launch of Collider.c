#include <stdio.h>

int main(){
    
    long long int n, min = 1000000001, locations[200001] = {0};
    char dir[200001];
    
    scanf(" %lld", &n);
    
    scanf(" %s", dir);
    
    for(int i = 0; i < n; i++){
        scanf("%lld", &locations[i]);
    }
    
    for(int i = 0; i < n - 1; i++){
        if(dir[i] == 'R' && dir[i + 1] == 'L'){
            if((locations[i + 1] - locations[i]) / 2 < min)
               min = (locations[i + 1] - locations[i]) / 2; 
        }
    }
    
    if(min == 1000000001)
        printf("-1");
    else
        printf("%lld", min);
    
    return 0;
}