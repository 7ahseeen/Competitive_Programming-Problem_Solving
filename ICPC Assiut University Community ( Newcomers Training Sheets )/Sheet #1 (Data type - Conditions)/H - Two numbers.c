    #include <stdio.h>
    #include <math.h>
     
    int main() {
        int a, b,x,y,z;
        scanf("%d%d",&a,&b);
        
        double div = (float)a / (float)b;
        x = floor(div);
        y = ceil(div);
      
        z = round(div);
    	printf("floor %d / %d = %d\n",a,b,x);
    	printf("ceil %d / %d = %d\n",a,b,y);
    	printf("round %d / %d = %d",a,b,z);
    	return 0;
    }