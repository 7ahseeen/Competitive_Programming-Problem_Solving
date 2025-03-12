    #include <stdio.h>
     
    int main()
    {
        int n, max, num;
        max = 0;
        scanf("%d",&n);
        while(n){
            scanf("%d",&num);
            if(num > max){
                max = num;
            }
            n--;
        }
        printf("%d",max);
        return 0;
    }