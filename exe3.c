#include <stdio.h>
#include <math.h>

long long potencia_rapida(int x, int n){
    if(n == 0){
        return 1;
    }

    if(n % 2 == 0){
        long long metade = potencia_rapida(x, n / 2);
        return metade * metade;
    } else {
        long long metade = potencia_rapida(x, (n-1)/2);
        return metade * metade * x;
    }
}

int main(){

    int base = 3;
    int expoente = 3;

    long long resultado = potencia_rapida(base, expoente);

    printf("Resultado = %lld\n", resultado);

    return 0;
}