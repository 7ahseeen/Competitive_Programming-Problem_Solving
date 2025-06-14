#include <stdio.h>
#include <math.h>

int main() {
    float x[4], y[4], a, b;
    
    int n;
    
    for(int i = 0; i < 4; i++)
        scanf("%f %f", &x[i], &y[i]);
        
    float min_x = x[0], max_x = x[0], 
            min_y = y[0], max_y = y[0];
        
    for(int i = 0; i < 4; i++){
        if(min_x > x[i])
            min_x = x[i];
        if(max_x < x[i])
            max_x = x[i];
        if(min_y > y[i])
            min_y = y[i];
        if(max_y < y[i])
            max_y = y[i];
    }
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%f %f", &a, &b);
        if(a < min_x || a > max_x || b < min_y || b > max_y)
            printf("NO\n");
        else
            printf("YES\n");
    }
    
    return 0;
}