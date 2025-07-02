#include <stdio.h>

int main() {
    
    int a = 0, b = 0, c = 0, total = 0;
    
    char num = getchar();
    
    while(num == '1' || num == '2' || num == '3' || num == '+'){
        switch(num){
            case '1':
                a++;
                break;
            case '2':
                b++;
                break;
            case '3':
                c++;
                break;
        }
        num = getchar();
    }
    
    total = a + b + c;
    
    for(int i = 1; i <= total; i++){
        if(a){
            printf("1");
            a--;
        }
        else if(b){
            printf("2");
            b--;
        }
        else if(c){
            printf("3");
            c--;
        }
            
        if(i != total)
            printf("+");
    }

    return 0;
}