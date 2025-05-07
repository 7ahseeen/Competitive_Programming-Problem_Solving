    #include <stdio.h>
     
    int main()
    {
    	int a,b,c;
    	
    	scanf("%d%d%d",&a,&b,&c);
    	
    	if(a<b){
    		if(a<c){
    			printf("%d\n",a);
    			if(b>c)
    				printf("%d\n%d\n",c,b);
    			else
    				printf("%d\n%d\n",b,c);
    		}
    		else
    			printf("%d\n%d\n%d\n",c,a,b);
    	}
    	else{
    		if(b<c){
    			printf("%d\n",b);
    			if(a>c)
    				printf("%d\n%d\n",c,a);
    			else
    				printf("%d\n%d\n",a,c);
    		}
    		else{
    			printf("%d\n%d\n%d\n",c,b,a);
    		}
    	}
    	
    	printf("\n%d\n%d\n%d\n",a,b,c);
    	
     
    	
    	return 0;
    }