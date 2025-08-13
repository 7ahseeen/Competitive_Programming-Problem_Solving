#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	long long int n;
	
	scanf("%lld", &n);
	
	if(n%2!=0){
		printf("-");
	}
	
	n += 1;
	
	printf("%lld", n / 2);
	
	return 0;
}