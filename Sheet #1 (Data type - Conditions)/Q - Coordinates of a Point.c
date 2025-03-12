#include <stdio.h>
#include <string.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    if(x==0 && y ==0){
        printf("Origem");
        return 0;}
    else if(x==0){
        printf("Eixo Y");
        return 0;}
    else if(y==0){
        printf("Eixo X");
        return 0;}
    
    if(x>0){
        if(y>0)
        printf("Q1");
        else
        printf("Q4");
    }
    else{
        if(y>0)
        printf("Q2");
        else
        printf("Q3");
        }
    
    return 0;
}