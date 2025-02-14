#include <stdio.h>

int main() {
    //variaveis das duas cartas
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    double pibPerCapita1, pibPerCapita2;
    double superPoder1, superPoder2;
    //escolhas da primeira carta
    printf("Digite o código da primeira cidade (Ex: A01, B02):\n");
    scanf("%s", codigo1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área (km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);
    //escolhas da segunda carta
    printf("\nDigite o código da segunda cidade (Ex: A01, B02):\n");
    scanf("%s", codigo2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área (km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo das duas cartas
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2;

    // Exibição das cartas
    printf("\nComparação entre %s e %s:\n", codigo1, codigo2);
    printf("Densidade Populacional: %s vence\n", (densidadePopulacional1 < densidadePopulacional2) ? codigo1 : codigo2);
    printf("População: %s vence\n", (populacao1 > populacao2) ? codigo1 : codigo2);
    printf("Área: %s vence\n", (area1 > area2) ? codigo1 : codigo2);
    printf("PIB: %s vence\n", (pib1 > pib2) ? codigo1 : codigo2);
    printf("Pontos turísticos: %s vence\n", (pontosTuristicos1 > pontosTuristicos2) ? codigo1 : codigo2);
    printf("Super Poder: %s vence\n", (superPoder1 > superPoder2) ? codigo1 : codigo2);

    return 0;
}
