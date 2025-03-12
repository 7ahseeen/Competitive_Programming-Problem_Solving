    #include <stdio.h>
     
    int main()
    {
    	int days, yr, mo;
    	scanf("%d",&days);
    	yr = days / 365;
    	days -= yr * 365;
    	mo = days / 30;
    	days -= mo* 30;
    	printf("%d years\n%d months\n%d days",yr,mo,days);
    	return 0;
    }