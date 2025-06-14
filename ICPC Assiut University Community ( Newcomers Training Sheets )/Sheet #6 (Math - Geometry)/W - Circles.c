#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, x3, x4, y1, y2, y3, y4,
                cx1, cy1, cx2, cy2, r1, r2, dist;
                
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);
    
    r1 = sqrt((x1 - x2) * (x1 - x2)
                + (y1 - y2) * (y1 - y2)) / 2;
                
    r2 = sqrt((x3 - x4) * (x3 - x4)
                + (y3 - y4) * (y3 - y4)) / 2;
                
    cx1 = (x1 + x2) / 2;
    cy1 = (y1 + y2) / 2;
    cx2 = (x3 + x4) / 2;
    cy2 = (y3 + y4) / 2;
                
    dist = sqrt((cx1 - cx2) * (cx1 - cx2)
                + (cy1 - cy2) * (cy1 - cy2));
                
    if(dist > r1 + r2 && dist > fabs(r1 - r2))
        printf("NO");
    else
        printf("YES");

    return 0;
}