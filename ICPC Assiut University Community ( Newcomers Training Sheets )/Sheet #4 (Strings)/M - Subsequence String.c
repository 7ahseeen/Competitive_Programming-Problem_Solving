#include <stdio.h>
#include <string.h>

int main() {
    char sub[] = "hello", str[10001];
    
    scanf("%s", &str);
    
    int len = strlen(str), j = 0;
    
    for(int i = 0; i < len; i++){
        if(str[i] == sub[j]){
            j++;
            }
        if(j == 6){
            break;
        }
        if(j == 5){
            printf("YES");
            return 0;
        }
    }
    
    printf("NO");

    return 0;
}