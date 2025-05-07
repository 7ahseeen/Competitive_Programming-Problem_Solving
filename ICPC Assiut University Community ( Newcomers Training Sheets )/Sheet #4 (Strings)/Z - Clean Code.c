#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int is_cmt = 0, is_spc, len, i, j;

    char code[1000000], out[1000000];

    while(fgets(code, 1000000, stdin)){
        len = strlen(code);

        is_spc = 1;

        if(code[0] == '\n')
            continue;

        for(i = 0, j = 0; i < len; i++){
            if(code[i] == '/' && code[i+1] == '*'){
                is_cmt = 1;
                i++;
                continue;
            }
            else if(is_cmt && code[i] == '*' && code[i+1] == '/'){
                is_cmt = 0;
                i++;
                continue;
            }
            else if(!is_cmt && code[i] == '/' && code[i+1] == '/'){
                out[j++] = '\n';
                break;
            }
            
            if(!is_cmt){
                out[j++] = code[i];

                if(!isspace(code[i]))
                    is_spc = 0;
            }
        }

        out[j] = '\0';

        if(!is_spc)
            printf("%s", out);
    }


    return 0;
}