    #include <stdio.h>
     
     
    int main(){
     
        char s[1000001];
        
        int len, t;
        
        scanf("%d", &t);
        while(t--){
        scanf("%s", s);
        
        for(len = 0; s[len] != '\0'; len++);
            
        if(len > 10)
            printf("%c%d%c\n", s[0],len-2,s[len-1]);
        else
            printf("%s\n", s);
        }
        return 0;
    }