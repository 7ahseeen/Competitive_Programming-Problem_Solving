#include <stdio.h>

int main() {
    int n, line[1000], min = 10000, max = 0, 
        minpos = -1, maxpos = -1,
        leftRun, rightRun, t;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &line[i]);
        
        if(line[i] > max){
            max = line[i];
            maxpos = i;
        }
        
        if(line[i] <= min){
            min = line[i];
            minpos = i;
        }
    }

    leftRun = maxpos;
    rightRun = n - minpos;

    if(maxpos > minpos)
        rightRun--;

    t = rightRun + leftRun;

    printf("%d", t - 1);

    return 0;
}