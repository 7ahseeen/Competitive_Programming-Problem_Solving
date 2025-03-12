    #include <stdio.h>
     
    int main() {
     
        int n, num;
        long long int fact;
        scanf("%d",&n);
        while(n){
            scanf("%d",&num);
            fact = 1;
            while(num){
                fact *= num;
                num--;
            }
            printf("%lld\n",fact);
            n--;
        }
        return 0;
    }