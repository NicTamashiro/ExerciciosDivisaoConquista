#include <stdio.h>

int encontrar_minimo(int arr[], int inicio, int fim){
    if(inicio == fim)
        return arr[inicio];

    int meio = (inicio + fim) / 2;

    int min_esquerda = encontrar_minimo(arr, inicio, meio);
    int min_direita = encontrar_minimo(arr, meio+1, fim);

    if(min_esquerda < min_direita){
        return min_esquerda;
    } else {
        return min_direita;
    }
}

int main(){

    int arr[] = {8, 3, 9, 1, 6, 2};
    int tamanho = 6;

    int resultado = encontrar_minimo(arr, 0, tamanho - 1);

    printf("O menor elemento eh: %d\n", resultado);

    return 0;
}