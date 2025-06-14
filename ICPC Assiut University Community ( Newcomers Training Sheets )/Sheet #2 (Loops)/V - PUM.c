#include <stdio.h>
 
int main() {
    int l, n[3]={1,2,3};
    scanf("%d", &l);
    for(int i = 0; i < l; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ",n[j]);
        printf("PUM\n");
        
        for(int j = 0; j < 3; j++)
            n[j] += 4;
    }
    return 0;
}