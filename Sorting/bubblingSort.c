#include <stdio.h>
#include "utilities.h"


void bubbleSorting(int arr[], int n){
    int i, j;

    for(i = 0; i < n-1;i++)
        for(j = 0; j < n-i-1;j++){
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
}

int main(){
    int arr[] = {5, 11, 29, 17, 34, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    bubbleSorting(arr, n);
    printArray(arr, n);
}