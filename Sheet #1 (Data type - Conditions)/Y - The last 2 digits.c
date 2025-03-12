#include <stdio.h>
     
     
int main()
{
	long long int a, b,c,d, mul;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	int A,B,C,D;
	A = a%100;
	B = b%100;
	C = c%100;
	D = d%100;
	mul = (A*B*C*D)%100;
	if(mul < 10)
	printf("0%lld", mul);
	else
	printf("%lld",mul);
	return 0;
}