#include <stdio.h>

void rec(int x, int m)
{
	if(x >= 1){
	    rec(x - 1, m);
	    printf("%d", x);
	    if(x != m)  printf(" ");
	}
}

int main() {
  
  int x;
  
  scanf("%d", &x);
  
  rec(x, x);
  
  return 0;
}