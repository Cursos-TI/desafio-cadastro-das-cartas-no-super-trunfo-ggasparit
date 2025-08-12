#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30], cidade1[30];
    int codigo1, populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[30], cidade2[30];
    int codigo2, populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Carta 1 
    printf("Carta 1\n");
    printf("Estado(sem espaços): ");
    scanf("%s", estado1);
    printf("Código da carta(apenas numero): ");
    scanf("%d", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2 
    printf("\nCarta 2\n");
    printf("Estado(sem espaços): ");
    scanf("%s", estado2);
    printf("Código da carta(apenas numeros): ");
    scanf("%d", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculos 
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Super Poder 
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    //  Saída 
    printf("\nDados da Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nDados da Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações 
    printf("\nResultados das Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)\n");
    printf("População: %d\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2) ? 1 : 0); // menor vence
    printf("PIB per capita: %d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: %d\n", (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}