#include <stdio.h>

int main()
{
	int arr[100000], n, m, num;
	
	scanf("%d%d", &n, &m);
	
	for(int i = 1; i <= m; i++)
		arr[i] = 0;
		
	for(int i = 1; i <= n; i++ ){
		scanf("%d", &num);
		arr[num]++;
	}
		
	for(int i = 1; i <= m; i++)
		printf("%d\n", arr[i]);

	return 0;
}