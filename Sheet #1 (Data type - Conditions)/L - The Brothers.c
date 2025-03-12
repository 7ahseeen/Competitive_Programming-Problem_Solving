    #include <stdio.h>
    #include <string.h>
     
    int main()
    {
    	char a[100], b[100], c[100], d[100];
    	
    	scanf("%s%s%s%s",a,b,c,d);
    	
    	int x = strlen(b);
    	int y = strlen(d);
    	
    	if(x!=y){
    		printf("NOT");
    		return 0;}
    	
    	while(x){
    		if(b[x]!=d[x]){
    			printf("NOT");
    			return 0;}
    			x--;}
    	printf("ARE Brothers");
    	return 0;
    }