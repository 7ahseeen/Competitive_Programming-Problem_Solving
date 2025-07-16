#include <stdio.h>

int main(){
	int n, b, d, num, waste = 0, cnt = 0;
	
	scanf(" %d %d %d", &n, &b, &d);
	
	while(n--){
		scanf("%d", &num);
		if(num > b)
			continue;
			
		if(waste + num > d){
			cnt++;
			waste = 0;
		}
		else
		    waste += num;
	}
	
	printf("%d", cnt);
	
	return 0;
}