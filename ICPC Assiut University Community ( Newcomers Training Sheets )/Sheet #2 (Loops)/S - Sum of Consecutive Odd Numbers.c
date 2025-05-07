    #include <stdio.h>
     
    int main() {
        
        int t, a, b, min, max, sum;
        scanf("%d",&t);
        while(t){
            scanf("%d%d",&a, &b);
            min = a < b ? a : b;
            max = a < b ? b : a;
            sum = 0;
            for(int i = min + 1; i < max; i++){
                if(i%2 != 0)
                    sum += i;
            }
            printf("%d\n",sum);
            t--;
        }
        return 0;
    }