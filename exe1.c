#include <stdio.h>

int busca_binaria_iterativa(int arr[], int inicio, int fim, int alvo){
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        if(arr[meio] == alvo){
            return meio;
        } else if(arr[meio] > alvo){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {3, 6, 8, 9, 12, 15};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 12;

    int posicao = busca_binaria_iterativa(arr, 0, tamanho-1, alvo);

    if(posicao == -1){
        printf("Elemento nao encontrado");
    } else {
        printf("Elemento '%d' na posicao %d\n", alvo, posicao);
    }


    return 0;
}