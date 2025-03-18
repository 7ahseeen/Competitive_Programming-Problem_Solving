#include <stdio.h>

int main()
{
	int n, num, sum;
	
	sum = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			
			scanf("%d", &num);
			
			if(j==i) sum += num;
			if(j== n-i-1) sum -= num;	
		}
	}
	printf("%d", sum < 0 ? -(sum) : sum);
	
	return 0;
}