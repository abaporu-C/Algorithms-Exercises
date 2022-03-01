#include <stdio.h>
#include "utilities.h"

void insertSort(int arr[], int n){
    int i, j, key;

    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {53, 12, 34, 5, 2, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, n);
    insertSort(arr, n);
    printArray(arr, n);

}