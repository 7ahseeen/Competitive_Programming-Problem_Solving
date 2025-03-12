    #include <stdio.h>
    #include <string.h>
     
    int main() {
        
        int a, len;
        char num[10], rev[10];
     
        scanf("%d",&a);
     
        for(int i = 0; i < a; i++)
        {
            scanf("%s",num);
            len = strlen(num);
            for(int j = len - 1; j >= 0; j--)
                printf("%c ",num[j]);
            
            printf("\n");
        }
        
        return 0;
    }