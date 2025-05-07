    #include <stdio.h>
    #include <math.h>
     
     
    int main()
    {
    	long long a,b,c,d;
    	double x, y;
    	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    	x = b * log(a);
    	y = d * log(c);
    	if(x>y)
    		printf("YES");
    	else
    		printf("NO");
    	return 0;
    }