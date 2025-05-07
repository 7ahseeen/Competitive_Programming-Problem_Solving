#include <stdio.h>

int bin[100], index = 0;

int odd(int x){
    if(x % 2 == 0)
        return 0;
    else
        return 1;
}

void decToBin(int dec){
    if(dec > 0){
        decToBin(dec / 2);
        bin[index] = dec % 2;
         index++;
    }
}

int pal(int x){

    decToBin(x);

    for(int i = 0; i < index / 2; i++)
        if(bin[i] != bin[index - 1 - i])    return 0;

    return 1;
}

int main() {
  
  int x;
  
  scanf("%d", &x);
  
  if(odd(x) && pal(x))  printf("YES");
  else  printf("NO");
  
  return 0;
}