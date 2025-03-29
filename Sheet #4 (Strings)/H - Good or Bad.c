#include <stdio.h>
     
     
int main(){
 
    char s[1000001];
    
    int len, t, g;

    scanf("%d", &t);

    while(t--){
    scanf("%s", s);
    
    for(len = 0; s[len] != '\0'; len++);

    g = 0;

    for(int i = 0; i < len - 2; i++){
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' ){
            g = 1; break;
        }
        else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1' ){
            g = 1; break;
        }
    }

        printf("%s", g ? "Good\n" : "Bad\n");
    }
    return 0;
}