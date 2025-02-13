#include <stdio.h>

int main() {
    //variaveis da carta
    char codigo[4];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
    float densidadePopulacional;
    double pibPerCapita;
    //Escolhas do cliente
    printf("Digite o código da cidade (Ex: A01, B02):\n");
    scanf("%s", codigo);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área (km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

    // Cálculo das propriedades
    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    //saida do codigo
    printf("\nDados da Cidade:\n");
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2lf bilhões\nPontos turísticos: %d\n", codigo, populacao, area, pib, pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2lf bilhões/hab\n", pibPerCapita);

    return 0;
}
