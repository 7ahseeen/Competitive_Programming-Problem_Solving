// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[26];
    
    char c;
    
    for(int i = 0; i < 26; i++) arr[i] = 0;
    
    while(1){
        scanf("%c", &c);
        
        if(!(c >= 'a' && c <= 'z'))   break;
        
        arr[c-97]++;
    }
    
    for(int i = 0; i < 26; i++)
        if(arr[i] > 0) printf("%c : %d\n", i+97, arr[i]);

    return 0;
}