    #include <stdio.h>
     
    int main() {
        int l, f1, f2, f3, tmp;
        scanf("%d", &l);
        f1 = 0;
        f2 = 1;
        f3 = 1;
        if(l == 1)
        {
            printf("0");
        }
        else if(l == 2){
            printf("0 1 ");
        }
        else
            while(l){
                printf("%d ",f1);
                f1 = f2;
                f2 = f3;
                f3 = f1 + f2;
                l--;
            }
        return 0;
    }