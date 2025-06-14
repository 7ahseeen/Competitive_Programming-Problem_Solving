    #include <stdio.h>
    #include <stdbool.h>
     
    int main() {
        
        int a, arr[50];
        char x;
        scanf("%c%d",&x,&a);
        for(int i = 0; i < a; i++)
            scanf("%d",&arr[i]);
            
        for(int i = 0; i < a; i ++)
        {
            for(int j = 0; j < arr[i]; j++)
                printf("%c",x);
                
            printf("\n");
        }
        
        return 0;
    }