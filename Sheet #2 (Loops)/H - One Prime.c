    #include <stdio.h>
     
    int main() {
     
        int n, isprime;
     
        isprime = 0;
     
        scanf("%d",&n);
        for(int i = 2; i < n; i++)
        {
            if(n%i==0)
                isprime = 1;
        }
     
        if(isprime){
            printf("NO");
        }
        else{
            printf("YES");
        }
        return 0;
    }