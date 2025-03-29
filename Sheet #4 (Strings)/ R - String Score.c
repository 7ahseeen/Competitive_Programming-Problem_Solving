#include <stdio.h>
#include <string.h>

int main(){

    char ch[3000000];

    int n, score = 0;

    scanf("%d", &n);

    scanf("%s", ch);

    for(int i = 0; i < n; i++){
        if(ch[i] == 'V')
            score += 5;
        else if(ch[i] == 'W')
            score += 2;
        else if(ch[i] == 'X')
            i++;
        else if(ch[i] == 'Y'){
            ch[n] = ch[i + 1];
            n++;
            i++;
        }
        else{
            if(ch[i + 1] == 'W'){
                score /= 2;
                i++;
            }
            else if(ch[i + 1] == 'V'){
                score /= 5;
                i++;
            }
        }
    }

    printf("%d", score);

    return 0;
}