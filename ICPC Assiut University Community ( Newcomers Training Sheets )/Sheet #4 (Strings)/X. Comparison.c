#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int algo(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main()
{

    char str[100001], tmp, left[100001], right[100001], min[100001];

    int len;

    scanf("%[^\n]s", str);

    len = strlen(str);

    if(len == 1){
        printf("%s", str);
        return 0;
    }

    strcpy(min, str);

    for(int i = 1; i < len; i++){

        strncpy(left, str, i);
        left[i] = '\0';
        strcpy(right, str + i);

        qsort(left, strlen(left), sizeof(char), algo);
        qsort(right, strlen(right), sizeof(char), algo);

        strcat(left, right);

        if(strcmp(left, min) < 0)
            strcpy(min, left);
    }

    printf("%s", min);

    return 0;
}