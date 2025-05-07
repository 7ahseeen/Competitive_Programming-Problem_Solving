#include <stdio.h>
     
int main()
{
    float x;
    scanf("%f",&x);
    if(x<0.00 || x>100.00)
        printf("Out of Intervals");
    else if(x<=25.00)
        printf("Interval [0,25]");
    else if(x<=50.00)
        printf("Interval (25,50]");
    else if(x<=75.00)
        printf("Interval (50,75]");
    else
        printf("Interval (75,100]");
    
    return 0;
}