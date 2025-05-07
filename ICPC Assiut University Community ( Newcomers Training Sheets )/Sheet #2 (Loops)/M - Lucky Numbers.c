    #include <stdio.h>
     
    int main()
    {
    	int min, max, num, lucky, n;
    	scanf("%d%d",&min, &max);
    	n = 0;
    	for(int i=min; i <= max; i++){
    		lucky = 1;
    		num = i;
    		while(num){
    			if((num%10!=4) && (num%10 != 7))
    			{
    				lucky = 0;
    				break;
    			}
    			num = (num - num%10)/10;
    		}
    		if(lucky){
    			printf("%d ", i);
    			n++;}
    	}
    	if(!n)
    		printf("-1");
    	
    	return 0;
    }