#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int cost[26], len;
    char str[1000001];
    int qnum = 0;

    scanf("%s", str);

    for(int i = 0; i < 26; i++)
        scanf("%d", &cost[i]);

    len = strlen(str);

    for(int i = 0; i < len && str[i] == '?'; i++, qnum++);

    if(qnum == len){
        printf("0\n");
        
        while(qnum--)
            printf("a");

        return 0;
    }

    for(int pos = 0; pos < len; pos++){
        if(pos + 1 == len && str[pos] == '?'){

            long long int min = 9000000;

            int min_pos = 0;

            for(int i = 0; i < 26; i++){
                if(llabs(cost[i] - cost[(int)(str[pos - 1] - 'a')]) < min){
                    min = llabs(cost[i] - cost[(int)(str[pos - 1] - 'a')]);
                    min_pos = i;
                }
            }

            str[pos] = min_pos + 'a';
        }
        else if(pos == 0 && str[pos] == '?'){
            int right = 0;

            while(str[pos + right + 1] == '?' && pos + right + 1  < len)
                right++;
            right++;

            long long int min = 9000000;

            int min_pos = 0;

            for(int i = 0; i < 26; i++){
                if(llabs(cost[i] - cost[(int)(str[pos + right] - 'a')]) < min){
                    min = llabs(cost[i] - cost[(int)(str[pos + right] - 'a')]);
                    min_pos = i;
                }
            }

            for(int j = 0; j < right; j++){
                str[pos + j] = min_pos + 'a';
            }

            pos += right - 1;
        }
        else if(str[pos] == '?'){
            int left = 0;

            while(str[pos - left - 1] == '?' && pos - left - 1 >= 0)
                left++;
            left++;
            
            int right = 0;

            while(str[pos + right + 1] == '?' && pos + right + 1  < len)
                right++;
            right++;

            long long int min = 9000000;

            int min_pos = 0;

            if(pos + right == len){
                for(int i = 0; i < 26; i++){
                    if(llabs(cost[(int)(str[pos - left] - 'a')] - cost[i] ) < min){
                        min = llabs(cost[(int)(str[pos - left] - 'a')] - cost[i] );
                        min_pos = i;
                    }
                }
            }
            else{
                for(int i = 0; i < 26; i++){
                    if(llabs(cost[i] - cost[(int)(str[pos + right] - 'a')]) 
                    + llabs(cost[(int)(str[pos - left] - 'a')] - cost[i] ) < min){
                        min = llabs(cost[i] - cost[(int)(str[pos + right] - 'a')]) 
                        + llabs(cost[(int)(str[pos - left] - 'a')] - cost[i] );
                        min_pos = i;
                    }
                }
            }
            for(int j = 0; j < right; j++){
                str[pos + j] = min_pos + 'a';
            }

            pos += right - 1;
        }
    }

    long long int cst = 0;

    for(int i = 1; i < len; i++)
        cst += llabs(cost[str[i - 1] - 'a'] - cost[str[i] - 'a']);

    printf("%lld\n%s", cst, str);

    return 0;
}