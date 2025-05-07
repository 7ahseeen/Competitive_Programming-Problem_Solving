#include <stdio.h>
#include <math.h>
 
int main() {
    const double PI = 3.141592653;
    double r, area;
    scanf("%lf",&r);
    area = PI * r *r;
    printf("%.9lf", area);
    return 0;
}