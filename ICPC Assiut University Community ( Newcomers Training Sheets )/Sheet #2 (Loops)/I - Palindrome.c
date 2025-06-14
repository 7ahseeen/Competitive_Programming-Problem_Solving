    #include <stdio.h>
    #include <string.h>
     
    int main()
    {
    	int n, l0, len, sm;
    	char s[8],x[8];
    	scanf("%s",&s);
    	
    	len = strlen(s);
    	
    	l0 = 1;
    	sm = 1;
    	for(int i =0;i<len;i++)
    		x[i] = s[len-i-1];
    		
    	for(int i=0;i<len;i++)
    		{
    			if(x[i]!='0')
    				l0 = 0;
    			if(!l0)
    				printf("%c",x[i]);
    		}
    	for(int i=0;i<len;i++)
    		if(x[i]!=s[i])
    			sm = 0;
    	printf("\n");
    	if(sm)
    		printf("YES");
    	else
    		printf("NO");
    	return 0;
    }