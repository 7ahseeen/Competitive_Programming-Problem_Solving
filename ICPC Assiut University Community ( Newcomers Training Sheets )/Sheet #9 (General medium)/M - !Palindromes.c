#include <stdio.h>
#include <string.h>

int palChk(char str[], int len){
	
	for(int i = 0; i < len / 2; i++)
		if(str[i] != str[len - 1 - i] )
			return 0;
	return 1;
}

int main(int argc, char *argv[])
{
	char str[1000001];
	
	scanf("%s", str);
	
	int len = strlen(str), i = 0;
	
	if(!palChk(str, len)){
		printf("%d", len);
		return 0;
	}
	
	int all_sm = 1;
	
	for( i = len - 1; i > 0; i--){
		if(str[i] != str[0]){
			all_sm = 0;
			break;
		}
	}
	
	if(all_sm)
		printf("%lld", 0);
	else
		printf("%lld", len - 1);
	
	return 0;
}