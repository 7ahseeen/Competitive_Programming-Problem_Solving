    #include <stdio.h>
     
     
    int main()
    {
    	int a,b;
    	char c,m,n;
    	scanf("%d%c%c%c%d",&a,&m,&c,&n,&b);
    	
    	if(c=='=' && a==b)
    		printf("Right");
    	else if(c=='<' && a<b)
    		printf("Right");
    	else if(c=='>' && a>b)
    		printf("Right");
    	else
    		printf("Wrong");
    	
    	return 0;
    }