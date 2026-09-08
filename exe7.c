#include <stdio.h>

int partition (int arr[], int start, int end){
    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j< end; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;

    int temp = arr[i]; 
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void quickSort(int arr[], int start, int end){
    if(end <= start) return;

    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main(){

    int arr[] = {8,2,4,7,1,3,9,6,5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, tamanho - 1);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}