#include <stdio.h>

int main()
{
	int m, n, a, x;
	
	 char arr[100000];
	
	scanf("%d%d", &m, &n);
	
	for(int i = 0; i < m * n; i++){
		scanf("%d", &a);
		arr[a] = 'x';
	}
	
	scanf("%d", &x);
	
	if(arr[x]!='x') printf("will take number");
	else printf("will not take number");
	
	return 0;
}