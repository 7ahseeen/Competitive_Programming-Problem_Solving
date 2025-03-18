#include <stdio.h>


int main()
{
	int n, m, arr[10000], sub[10000], cnt = 0;
	
	scanf("%d%d", &n, &m);
	
	for(int i=0; i < n; i++)
		scanf("%d", &arr[i]);
		
	for(int i = 0; i < m; i++)
		scanf("%d", &sub[i]);
		
	for(int i=0; i < n; i++){
		if(cnt == m) break;
		if(arr[i] == sub[cnt]) cnt++;
	}
		
	if(cnt != m) printf("NO");
	else printf("YES");
		
	return 0;
}

