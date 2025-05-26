#include <stdio.h>

#include <stdio.h>

int main() {
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1 = 0, pontos2 = 0;

    printf("Populacao pais 1: ");
    scanf("%d", &populacao1);
    printf("Area pais 1: ");
    scanf("%f", &area1);
    printf("PIB pais 1: ");
    scanf("%f", &pib1);

    printf("Populacao pais 2: ");
    scanf("%d", &populacao2);
    printf("Area pais 2: ");
    scanf("%f", &area2);
    printf("PIB pais 2: ");
    scanf("%f", &pib2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_capita1 = pib1 / populacao1;
    float pib_capita2 = pib2 / populacao2;

    if (densidade1 < densidade2) pontos1++;
    else if (densidade2 < densidade1) pontos2++;

    if (pib_capita1 > pib_capita2) pontos1++;
    else if (pib_capita2 > pib_capita1) pontos2++;

    printf("\nDensidade pais 1: %.2f\n", densidade1);
    printf("Densidade pais 2: %.2f\n", densidade2);
    printf("PIB per capita pais 1: %.2f\n", pib_capita1);
    printf("PIB per capita pais 2: %.2f\n", pib_capita2);
    printf("\nPontos pais 1: %d\n", pontos1);
    printf("Pontos pais 2: %d\n", pontos2);

    if (pontos1 > pontos2)
        printf("Pais 1 vence!\n");
    else if (pontos2 > pontos1)
        printf("Pais 2 vence!\n");
    else
        printf("Empate!\n");

    return 0;
}
