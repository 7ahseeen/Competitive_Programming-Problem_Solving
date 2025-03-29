#include <stdio.h>
#include <string.h>

int main(){

    char url[100001], uname[10000], pwd[10000], prof[10000], role[10000], key[10000];

    int begin = 0, i;

    scanf("%s", url);

    for(; url[begin] != '='; begin++);
    begin++;

    for(i = 0; url[begin] != '&'; i++, begin++)
        uname[i] = url[begin];

    uname[i] = '\0';

    for(; url[begin] != '='; begin++);
    begin++;

    for(i = 0; url[begin] != '&'; i++, begin++)
        pwd[i] = url[begin];

    pwd[i] = '\0';

    for(; url[begin] != '='; begin++);
    begin++;

    for(i = 0; url[begin] != '&'; i++, begin++)
        prof[i] = url[begin];

    prof[i] = '\0';

    for(; url[begin] != '='; begin++);
    begin++;

    for(i = 0; url[begin] != '&'; i++, begin++)
        role[i] = url[begin];

    role[i] = '\0';

    for(; url[begin] != '='; begin++);
    begin++;

    for(i = 0; url[begin] != '\0' && url[begin] != '\n'; i++, begin++)
        key[i] = url[begin];

    key[i] = '\0';
 
    printf("username: %s\n", uname); 
    printf("pwd: %s\n", pwd); 
    printf("profile: %s\n", prof); 
    printf("role: %s\n", role); 
    printf("key: %s", key); 

    return 0;
}