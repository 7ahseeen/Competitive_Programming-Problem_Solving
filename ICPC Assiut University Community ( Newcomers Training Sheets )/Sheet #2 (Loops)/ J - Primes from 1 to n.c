    #include <stdio.h>
    #include <stdbool.h>
     
    int main() {
        
        int a;
        bool prime;
        
        scanf("%d",&a);
        
        for(int i = 2; i <= a; i++ ){
            prime = true;
            for(int j = 2; j<i;j++){
                if(i%j==0)
                    {
                        //printf("%d %d\n",i,j);
                        prime = false;
                        break;
                    }}
            if(prime)
                printf("%d ",i);
            }
        return 0;
    }