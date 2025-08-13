#include <stdio.h>

long long frq[1000000] = {0};

int main(int argc, char *argv[])
{
	long long N, x, cnt = 0;
	
	scanf("%lld", &N);
	
	while(N--){
		scanf("%lld", &x);
		
		if(frq[x - 1] == 1)
			cnt++;
		else
			frq[x - 1] = 1;
	}
	
	printf("%lld", cnt > 0 ? cnt : -1);
	
	return 0;
}