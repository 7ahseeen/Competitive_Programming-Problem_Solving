    #include <stdio.h>
     
    int main()
    {
    	int num[3],min, max;
    	scanf("%d%d%d",&num[0],&num[1],&num[2]);
    	max = -1000000;
    	min = 1000000;
    	for(int i=0;i<3;i++){
    		if(max<num[i]){
    			max = num[i];}
    		if(min>num[i]){
    			min = num[i];}
    	}
    	printf("%d %d",min,max);
    	return 0;
    }