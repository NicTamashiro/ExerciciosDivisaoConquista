#include <stdio.h>

void merge(int arr[], int inicio, int meio, int fim){
    int esquerda = inicio;
    int direita = meio + 1;  
    int pos = 0;
    int temp[fim - inicio + 1]; 

    while(esquerda <= meio && direita <= fim){
        if(arr[esquerda] <= arr[direita]){
            temp[pos++] = arr[esquerda++];
        } else {
            temp[pos++] = arr[direita++];
        }
    }

    while (esquerda <= meio){
        temp[pos++] = arr[esquerda++];
    }

    while (direita <= fim){
        temp[pos++] = arr[direita++];
    }
    
    for(esquerda = inicio; esquerda <= fim; esquerda++){
        arr[esquerda] = temp[esquerda - inicio];
    }
}

void mergesort(int arr[], int inicio, int fim){
    if (inicio < fim){
        int meio = (inicio + fim) / 2;

        mergesort(arr, inicio, meio);
        mergesort(arr, meio + 1, fim);

        merge(arr, inicio, meio, fim);
    }
}

int main(){

    int arr[] = {2,8,5,3,9,4,1,7};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, tamanho - 1);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}