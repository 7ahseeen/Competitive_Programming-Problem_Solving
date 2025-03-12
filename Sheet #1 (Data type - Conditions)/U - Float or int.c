    #include <stdio.h>
     
    int main()
    {
    	int a;
    	float x;
    	
    	scanf("%f",&x);
    	
    	a = x;
    	
    	if(a==x)
    		printf("int %d",a);
    	else
    	{
    		x -= a;
    		printf("float %d %.3f",a,x);
    	}
     
    	
    	return 0;
    }