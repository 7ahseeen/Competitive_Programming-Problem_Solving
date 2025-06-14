#include <stdio.h>
#include <math.h>

#define buff 1e-9

int main() {

    double x1, y1, x2, y2, slope1;
    double a1, b1, a2, b2, slope2;

    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
    
    if(fabs(x2 - x1) <= buff && fabs(a2 - a1) <= buff){
        printf("YES");
        return 0;
    }
    else if(fabs(x2 - x1) <= buff || fabs(a2 - a1) <= buff){
        printf("NO");
        return 0;
    }
    
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (b2 - b1) / (a2 - a1);
    
    
        if(fabs(slope1 - slope2) <= buff)
            printf("YES\n");
        else
            printf("NO\n");

    return 0;
}