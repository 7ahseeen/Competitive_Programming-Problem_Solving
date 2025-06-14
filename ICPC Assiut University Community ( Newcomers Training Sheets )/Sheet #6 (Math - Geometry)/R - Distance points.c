#include <stdio.h>
#include <math.h>

int main() {
    float g, f, x, y;
    
    scanf("%f %f %f %f", &g, &f, &x, &y);
    
    float dx = g - x;
    float dy = f - y;
    float dist = dx * dx + dy * dy;
    
    dist = sqrt(dist);
    
    printf("%.9f\n", dist);
    
    return 0;
}