    #include <stdio.h>
    #include <string.h>
     
    int main() {
        
        int a,b, min, max, sum;
     
        while(1){
            scanf("%d%d",&a, &b);
            if(a <= 0 || b <= 0)
                break;
            min = a < b ? a : b;
            max = a < b ? b : a;
            sum = 0;
            for(int i = min; i <= max; i++){
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n",sum);
        }
        
        return 0;
    }