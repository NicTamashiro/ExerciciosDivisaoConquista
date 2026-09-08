#include <stdio.h>

int esta_ordenado(int arr[], int inicio, int fim){
    if(inicio >= fim){
        return 1;
    }

    int meio = (inicio + fim) / 2;

    int esquerda_ordenada = esta_ordenado(arr, inicio, meio);
    int direita_ordenada = esta_ordenado(arr, meio+1, fim);

    if(esquerda_ordenada && direita_ordenada && arr[meio] <= arr[meio + 1]){
        return 1;
    } else {
        return 0;
    }

}

int main(){

    int arr[] = {1, 3, 5, 7, 9, 11};
    int tamanho = 6;

    int resultado = esta_ordenado(arr, 0, tamanho - 1);

    if(resultado){
        printf("O array esta ordenado\n");
    } else {
        printf("O array nao esta ordenado\n");
    }


    return 0;
}