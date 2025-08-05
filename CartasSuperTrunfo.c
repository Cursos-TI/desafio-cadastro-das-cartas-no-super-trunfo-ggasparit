#include <stdio.h>

int main() {
    // Dados da primeira carta

    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da segunda carta

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Carta 1:\n");

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("Carta 2:\n");
   
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos dados da primeira carta
    
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
   
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

 return 0;
}
