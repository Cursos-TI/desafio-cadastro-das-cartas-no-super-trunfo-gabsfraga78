#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estadoA, estadoB;
    char codigoA01[4], codigoA02[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &estadoA);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf(" %3s", codigoA01);
    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    while (getchar() != '\n');

    // Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &estadoB);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf(" %3s", codigoA02);
    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Mostra os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA01);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Mostra os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigoA02);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
