#include <stdio.h>
#include <string.h>

int main(){

    char str[100000], que[1000], tmp;

    int n, q, l, r;

    scanf("%d%d", &n, &q);

    scanf("%s", str);

    while(q--){
        scanf("%s", que);

        if(strcmp(que, "pop_back") == 0){
            n--;
            str[n] = '\0';
        }
        else if(strcmp(que, "front") == 0){
            printf("%c\n", str[0]);
        }
        else if(strcmp(que, "back") == 0){
            printf("%c\n", str[n - 1]);
        }
        else if(strcmp(que, "sort") == 0){
            scanf("%d%d", &l, &r);
            l--; r--;

            if(l > r){                 
                l = l ^ r;                 
                r = l ^ r;                 
                l = l ^ r;             
            }

            for(int i = l; i < r; i++){
                for(int j = l; j < r; j++){
                    if(str[j] > str[j + 1]){
                        tmp = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = tmp;
                    }
                }
            }
        }
        else if(strcmp(que, "reverse") == 0){
            scanf("%d%d", &l, &r);
            l--; r--;

            if(l > r){                 
                l = l ^ r;                 
                r = l ^ r;                 
                l = l ^ r;             
            }

            for(int i = l, j = r; i < j; i++, j--){
                tmp = str[i];
                str[i] = str[j]; 
                str[j]  = tmp;
            }
        }
        else if(strcmp(que, "print") == 0){
            scanf("%d", &l);
            printf("%c\n", str[l - 1]);
        }
        else if(strcmp(que, "substr") == 0){
            scanf("%d%d", &l, &r);

            if(l > r){                 
                l = l ^ r;                 
                r = l ^ r;                 
                l = l ^ r;             
            }

            for(int i = l - 1; i < r; i++)
                printf("%c", str[i]);

            printf("\n");
        }
        else if(strcmp(que, "push_back") == 0){
            scanf("%c", &tmp);
            scanf("%c", &tmp);
            str[n] = tmp;
            n++;
            str[n] = '\0';
        }
        scanf("%c", &tmp);
    }
    
    return 0;
}