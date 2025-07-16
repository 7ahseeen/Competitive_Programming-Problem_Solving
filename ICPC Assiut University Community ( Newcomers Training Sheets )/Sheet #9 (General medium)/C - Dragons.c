#include <stdio.h>

typedef struct{
    int strength;
    int bonus;
}duragonSama;

int main(){
    
    int n, s, cnt = 0;
    
    duragonSama duragons[10000];
    
    scanf(" %d %d", &s, &n);
    
    for(int i = 0; i < n; i++)
        scanf(" %d %d", &duragons[i].strength, &duragons[i].bonus);
        
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(duragons[j].strength != 0 && duragons[j].strength < s){
                duragons[j].strength = 0;
                s += duragons[j].bonus;
                
                cnt++;
            }
        }
    }
    
    if(cnt == n)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}