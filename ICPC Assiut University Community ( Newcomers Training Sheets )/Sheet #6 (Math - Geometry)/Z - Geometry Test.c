#include <stdio.h>
#include <string.h>

int main(){
    
    double r, l;
    
    scanf("%lf %lf", &r, &l);
    
    if((r + r) <= l)
        printf("Square");
    else if(((l * l + l * l) - ((r + r) * (r + r))) <= 1e-9) 
        printf("Circle");
    else
        printf("Complex");
    
    return 0;
}