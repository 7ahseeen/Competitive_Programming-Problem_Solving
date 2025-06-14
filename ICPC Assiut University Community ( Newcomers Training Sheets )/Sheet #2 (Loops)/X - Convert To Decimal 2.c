    #include <stdio.h>
    #include <math.h>
     
    int main()
    {
    	
    	long long int num, dec;
    	int t, n;
    	scanf("%d",&t);
    	while(t){
    	scanf("%lld",&num);
    	
    	dec = 0;
    	n = 0;
    	
    	while(num){
    		if(num%2==1)
    			n++;
    		num /= 2;
    	}
    	
    	for(int i=0;i<n;i++)
    	{
    		dec += pow(2,i);
    	}
    	
    	printf("%lld\n", dec);
    	t--;}
    	return 0;
    }