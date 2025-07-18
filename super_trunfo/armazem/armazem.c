#include <stdio.h>;

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoque_minimo = 1000;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);

    printf("Entre com a Umidade: ");
    scanf("%f", &umidade);

    printf("Entre com o estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura Está alta!\n");
    } else {
        printf("Temperatura Está dentro dos parâmetros\n");
    }


    if (umidade > 50) {
        printf("Umidade elevada!\n");
    } else {
        printf("Umidade Está dentro dos parâmeros\n");
    }


    if (estoque < estoque_minimo) {
        printf("Estoque abaixo do mínimo!\n");
    } else {
        printf("Estoque normal\n");
    }

    return 0;
}