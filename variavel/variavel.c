#include <stdio.h>

int main(){
    int idade = 18;
    float altura = 1.68;
    char opcao = 'C';
    char nome[20] = "caike";
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);

    return 0;
}