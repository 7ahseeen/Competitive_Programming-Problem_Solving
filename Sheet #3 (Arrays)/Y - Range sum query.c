#include <stdio.h>

int main()
{
	int n, q, l, r;
	
	scanf("%d%d", &n, &q);
	
	long long int sums[100000], num;
	
	sums[0] = 0;
	
	for(int i = 1; i <= n; i++){
		scanf("%lld", &num);
		sums[i] = num + sums[i-1];
	}
	
	while(q--){
		scanf("%d%d", &l, &r);
		printf("%lld\n", sums[r]-sums[l-1]);
	}
	return 0;
}