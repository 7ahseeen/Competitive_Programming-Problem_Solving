#include <stdio.h>
#include <math.h>
 
int main() {
    const float PI = 3.141592653;
    float r, area;
    scanf("%f",&r);
    area = PI * r *r;
    printf("%.9f", area);
    return 0;
}
