    #include <stdio.h>
    #include <string.h>
    int main()
    {
    	char x;
    	scanf("%c",&x);
    	if(x<65)
    		printf("IS DIGIT");
    	else{
    		 printf("ALPHA\n");
    		 if(x<97)
    		printf("IS CAPITAL");
    		else
    		printf("IS SMALL");
    	}
    	return 0;
    }