#include <stdio.h>
#include <math.h>

#define buff 1e-9

int main() {

    double x, y, g, f, r, dist;
    
    int n;

    
    scanf("%lf %lf %lf %d", &g, &f, &r, &n);
    
    for(int i = 0; i < n; i++){
        scanf("%lf %lf", &x, &y);
        
        dist = (g - x ) * (g - x) + (f - y) * (f - y);
        
        if(dist <= r * r + buff)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}