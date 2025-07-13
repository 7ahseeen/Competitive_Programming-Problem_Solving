#include <stdio.h>

int s, e;

int Route(int s){
    if(s >= e)
        return s == e;
        
    return Route(s + 1) + Route(s + 2) + Route(s + 3);
}

int main() {
    
    scanf("%d %d", &s, &e);
    
    int numRoute = Route(s);
    
    printf("%d", numRoute);

    return 0;
}