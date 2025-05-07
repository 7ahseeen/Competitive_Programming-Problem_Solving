#include <stdio.h>
#include <string.h>

int vCnt(char arr[], int index){
    int cnt = 0;
    
    if(index >= 0){
        if(arr[index] < 'a' &&  arr[index] != ' ')
            arr[index] += 32;
            if(arr[index] == 'a' || arr[index] == 'e' || arr[index] == 'i' || arr[index] == 'o' || arr[index] == 'u')
                cnt++;
    }
    else
        return 0;
    return cnt + vCnt(arr, index - 1);
}


int main(){
    char arr[1000];
    
    scanf("%[^\n]s", arr);
    
    printf("%d", vCnt(arr, strlen(arr) - 1));
    
    return 0;
}