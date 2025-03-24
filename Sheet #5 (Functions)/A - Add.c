#include <stdio.h>

void summ(int x, int y)
{
	printf("%d", x + y);
}

int main() {
  
  int x, y;
  
  scanf("%d%d", &x, &y);
  
  summ(x, y);
  
  return 0;
}