#include <stdio.h>
#include <math.h>

#define buff 1e-9

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    
    double area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    
    if (fabs(area) <= buff) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}