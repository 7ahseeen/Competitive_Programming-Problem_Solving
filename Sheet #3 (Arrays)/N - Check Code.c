#include <stdio.h>

int main() {
    int a, b, c1 = 0, c2 = 1;
	char num;

	scanf("%d%d", &a, &b);
	
	scanf("%c", &num);

	for(int i = 1; i <= a+b+1; i++){
		scanf("%c", &num);
		//printf("%c ", num);

		if(i==a+1){
			if(num=='-')
				c1 = 1;
//			continue;
		}
        else
        //printf("%d %d\n", c1, c2);
		if(num < '0' || num > '9')
			c2 = 0;

	//	printf("%d -- %d %d\n", i, c1, c2);
	}

	if(c1 && c2) printf("Yes");
	else printf("No");

    return 0;
}