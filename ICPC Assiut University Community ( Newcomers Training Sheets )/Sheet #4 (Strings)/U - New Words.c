#include <stdio.h>


int main(){

    long long int arr[5] = {0,0,0,0,0}, min;

    char x;

    do{

        x = getchar();

        if(x >= 97)
            x -= 32;

        switch (x)
        {
        case 'E':
            arr[0]++;
            break;
        case 'G':
            arr[1]++;
            break;
        case 'Y':
            arr[2]++;
            break;
        case 'P':
            arr[3]++;
            break;
        case 'T':
            arr[4]++;
            break;
        default:
            break;
        }
        
        min = arr[0];

        for(int i = 0; i < 5; i++)
            if(arr[i] < min)
                min = arr[i];

    }while(x != '\0' && x != '\n');

    printf("%d", min);

    return 0;
}