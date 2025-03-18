#include <stdio.h>


int main()
{
	int n, a[1000], b[1000], cnt = 0; 
	
	scanf("%d", &n);
	
	for(int i= 0; i < n; i++)
		scanf("%d", &a[i]);
			
	for(int i= 0; i < n; i++)
		scanf("%d", &b[i]);
		
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++){
			if(a[i] != 0 && b[j] != 0){
				if(a[i] == b[j]){
					a[i] = 0;
					b[j] = 0;
					cnt++;
				}
			}
		}
			
	if(cnt==n) printf("yes");
	else printf("no");
			
	return 0;
}