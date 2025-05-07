#include <stdio.h>
     
int main()
{
    int K, S, k, n;
    scanf("%d%d",&K,&S);
    n = 0;
    for(int i =0;i<=K;i++)
        for(int j=0;j<=K;j++){
            k = S - (i+j);
            if(k>=0 && k <= K)
                n++;
        }
    printf("%d",n);
    
    return 0;
}