#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo!\n");
    char estado1 = 'A';
    char codigo1[50] = "A01";
    char nome1[40] = "Resende";
    int populacao1 = 27394;
    float area1 = 1225.56;
    float pib1 = 34.93;
    int turistico1 = 30;

    printf("Carta 1: \n");
    printf("Estado: %c - Código: %s\n", estado1, codigo1);
    printf("Nome da cidade: %s - População: %d\n", nome1, populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turistico1);

    char estado2 = 'B';
    char codigo2[50] = "B02";
    char nome2[40] = "Petrópolis";
    int populacao2 = 80658;
    float area2 = 1530.24;
    float pib2 = 50.82;
    int turistico2 = 40;

    printf("Carta 2: \n");
    printf("Estado: %c - Código: %s\n", estado2, codigo2);
    printf("Nome da cidade: %s - População: %d\n", nome2, populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);

    return 0;
}