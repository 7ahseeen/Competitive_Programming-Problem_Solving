    #include <stdio.h>
     
    int main() {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        int x, y;
        x = a%10;
        y = b%10;
    	printf("%d", x + y);
    	return 0;
    }