    #include <stdio.h>
    #include <math.h>
     
    int main()
    {
    	long long  a,b,c,d, min, max;
    	
    	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    	if(a>d || b<c){
    		printf("-1");
    		return 0;}
    	min = (a>c) ? a : c;
    	max = (b>d) ? d : b;
    	
    	printf("%lld %lld",min,max);
    	
    	return 0;
    }