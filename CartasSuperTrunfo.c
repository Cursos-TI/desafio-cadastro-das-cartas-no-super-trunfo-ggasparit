#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30], cidade1[30];
    int codigo1, populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Carta 2
    char estado2[30], cidade2[30];
    int codigo2, populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Leitura da primeira carta
    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%d", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área : ");
    scanf("%f", &area1);

    printf("PIB : ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da segunda carta
    printf("Carta 2\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%d", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área : ");
    scanf("%f", &area2);

    printf("PIB : ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados da Carta 1
    printf(" \nDados da Carta 1\n ");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f \n", densidade1);
    printf("PIB per capita: %f\n", pibPerCapita1);

    // Exibição dos dados da Carta 2
    printf("\nDados da Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB:%f \n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f \n", densidade2);
    printf("PIB per capita: %f\n", pibPerCapita2);

    return 0;
}