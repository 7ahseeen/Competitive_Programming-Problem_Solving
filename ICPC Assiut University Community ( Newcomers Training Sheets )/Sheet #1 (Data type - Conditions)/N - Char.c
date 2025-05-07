    #include <stdio.h>
    #include <string.h>
    int main()
    {
    	char x;
    	scanf("%c",&x);
    	if(x>=97)
    		x -= 32;
    	else
    		x += 32;
    		
    	printf("%c",x);
    	return 0;
    }