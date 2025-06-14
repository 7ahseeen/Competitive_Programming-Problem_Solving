#include <stdio.h>

int num[100000], tmp[100000];

int binarySearch(int start, int stop, int val){
    int mid;

    while(start <= stop){
        mid = start + (stop - start) / 2;

        if(num[mid] == val)
            return 1;
        else if(num[mid] > val)
            stop = mid - 1;
        else
            start = mid + 1;
    }

    return 0;
}

void merge(int start, int mid, int stop){
    int i = start, j = mid + 1, k = 0;
    
    
    while(i <= mid && j <= stop){
        if(num[i] > num[j]){
            tmp[k++] = num[j++];
        }
        else{
            tmp[k++] = num[i++];
        }
    }
    
    while(i <= mid) {
        tmp[k++] = num[i++];
    }

    while(j <= stop) {
        tmp[k++] = num[j++];
    }

    for(i = start; i <= stop; i++){
        num[i] = tmp[i - start];
    }
    
}

void mergeSort(int start, int stop){
    int mid;
    
    if(start < stop){
        mid = start + (stop - start) / 2;
        mergeSort(start, mid);
        mergeSort(mid + 1, stop);
        merge(start, mid, stop);
    }
}

int main(){
    int q, n, x;

    scanf("%d%d", &n, &q);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    mergeSort(0, n - 1);

    
    while(q--){
        scanf("%d", &x);

        if(binarySearch(0, n - 1, x))
            printf("found\n");
        else
            printf("not found\n");
        }
    return 0;
}