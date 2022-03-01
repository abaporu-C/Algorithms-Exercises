#include <stdio.h>
#include "utilities.h"

void bubbleSorting(int arr[], int n){
    int i;

    if(n <= 1) return;

    for(i = 0; i < n-1;i++)
        if(arr[i] > arr[i+1])
            swap(&arr[i], &arr[i + 1]);
    
    bubbleSorting(arr, n-1);
}

int main(){
    int arr[] = {5, 11, 29, 17, 34, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    bubbleSorting(arr, n);
    printArray(arr, n);
}