    #include <stdio.h>
     
    int main()
    {
    	int min, max, num, lucky, n, sum, tmp_sum;
    	scanf("%d%d%d",&n,&min, &max);
    	sum = 0;
    	for(int i=1; i <=n; i++){
    		lucky = 1;
    		num = i;
    		tmp_sum = 0;
    		while(num){
    			tmp_sum += num%10;
    			num = (num - num%10)/10;
    		}
    				if(tmp_sum > max || tmp_sum < min)
    			{
    				continue;
    			}
    			sum += i;
    		
    	}
    	
    	printf("%d",sum);
    	
    	return 0;
    }