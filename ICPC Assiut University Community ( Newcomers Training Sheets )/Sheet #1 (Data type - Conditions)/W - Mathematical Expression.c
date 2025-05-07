    #include <stdio.h>
     
     
    int main()
    {
    	int a,b,r;
    	char c,m,n,x,y,z;
    	scanf("%d%c%c%c%d%c%c%c%d",&a,&m,&c,&n,&b,&x,&y,&z,&r);
    	
    	if(c=='+'){
    		if(a+b==r) printf("Yes");
    		else printf("%d",a+b);
    	}
    	else if(c=='-'){
    		if(a-b==r) printf("Yes");
    		else printf("%d",a-b);
    	}
    	else if(c=='*'){
    		if(a*b==r) printf("Yes");
    		else printf("%d",a*b);
    	}
    	return 0;
    }