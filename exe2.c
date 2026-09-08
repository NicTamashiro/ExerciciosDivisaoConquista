#include <stdio.h>

int busca_binaria_recursiva(int arr[], int inicio, int fim, int alvo){
    
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        if(arr[meio] == alvo) {
            return meio;
        } else if(arr[meio] > alvo){
            return busca_binaria_recursiva(arr, inicio, meio - 1, alvo);
        } else {
            return busca_binaria_recursiva(arr, meio + 1, fim, alvo);
        }
    }
    return -1;
}

int main(){

    int arr[] = {3, 6, 8, 9, 12, 15};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 8;
    
    int posicao = busca_binaria_recursiva(arr, 0, tamanho - 1, alvo);

    if(posicao == -1){
        printf("Elemento nao encontrado");
    } else {
        printf("Elemento '%d' na posicao %d\n", alvo, posicao);
    }

    return 0;
}