    #include <stdio.h>
     
    int main()
    {
        int num[1000], n, pos=0, neg=0, odd=0, even=0;
     
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
            scanf("%d",&num[i]);
        for(int i = 0; i < n; i++)
        {
            if(num[i]%2 == 0)
                even++;
            else
                odd++;
     
            if(num[i] < 0)
                neg++;
            else if(num[i]>0)
                pos++;
     
        }
     
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
        return 0;
    }