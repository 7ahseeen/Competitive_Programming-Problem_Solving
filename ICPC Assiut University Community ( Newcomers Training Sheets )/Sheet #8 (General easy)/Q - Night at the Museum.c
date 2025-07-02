#include <stdio.h>

int main() {
    
    int cost = 0, i = 0, dist;
    
    char pos = 'a';
    char str[101];
    
    scanf("%s", str);
    
    while(str[i] != '\0')
    {
        dist = (str[i] > pos) ? (str[i] - pos) : (pos - str[i]);
        cost += ((dist > 13) ? (26 - dist) : dist);
        pos = str[i];
        i++;
    }

    printf("%d", cost);

    return 0;
}