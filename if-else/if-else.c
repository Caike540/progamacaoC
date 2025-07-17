#include <stdio.h>;

int main(){
    int numero = 10;
    int resultado;

    resultado = numero % 2;

    printf("O resultado é %d\n", resultado);

    if (resultado == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;
}