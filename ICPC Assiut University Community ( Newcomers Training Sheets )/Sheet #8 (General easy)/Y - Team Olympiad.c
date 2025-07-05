#include <stdio.h>

int main() {
    
    int prog_pos[5000], maths_pos[5000], pe_pos[5000];
    
    int n, x, prog = 0, maths = 0, pe = 0, min = 6000;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        
        switch(x){
            case 1:
                prog_pos[prog++] = i;
                break;
            case 2:
                maths_pos[maths++] = i;
                break;
            case 3:
                pe_pos[pe++] = i;
                break;
        }
    }
    
    if(prog < min)
        min = prog;
    if(maths < min)
        min = maths;
    if(pe < min)
        min = pe;
        
    if(min == 0){
        printf("0");
        return 0;
    }
        
    printf("%d\n", min);
    
    for(int i = 0; i < min; i++){
        printf("%d %d %d\n", prog_pos[i] + 1, maths_pos[i] + 1, pe_pos[i] + 1);
    }

    return 0;
}