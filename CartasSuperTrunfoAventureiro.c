#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    double pibPerCapita1, pibPerCapita2;
    int escolha;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira cidade:\n");
    scanf("%s", estado1);
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área (km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda cidade:\n");
    scanf("%s", estado2);
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área (km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões):\n");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo das propriedades derivadas
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Menu interativo para escolha do atributo de comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Estrutura switch para comparação
    switch (escolha) {
        case 1:
            printf("\nComparação de População:\n");
            printf("%s: %d | %s: %d\n", nome1, populacao1, nome2, populacao2);
            printf("Vencedor: %s\n", (populacao1 > populacao2) ? nome1 : (populacao2 > populacao1) ? nome2 : "Empate");
            break;
        case 2:
            printf("\nComparação de Área:\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", nome1, area1, nome2, area2);
            printf("Vencedor: %s\n", (area1 > area2) ? nome1 : (area2 > area1) ? nome2 : "Empate");
            break;
        case 3:
            printf("\nComparação de PIB:\n");
            printf("%s: %.2lf bilhões | %s: %.2lf bilhões\n", nome1, pib1, nome2, pib2);
            printf("Vencedor: %s\n", (pib1 > pib2) ? nome1 : (pib2 > pib1) ? nome2 : "Empate");
            break;
        case 4:
            printf("\nComparação de Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", nome1, pontosTuristicos1, nome2, pontosTuristicos2);
            printf("Vencedor: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? nome1 : (pontosTuristicos2 > pontosTuristicos1) ? nome2 : "Empate");
            break;
        case 5:
            printf("\nComparação de Densidade Populacional:\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", nome1, densidadePopulacional1, nome2, densidadePopulacional2);
            printf("Vencedor: %s\n", (densidadePopulacional1 < densidadePopulacional2) ? nome1 : (densidadePopulacional2 < densidadePopulacional1) ? nome2 : "Empate");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
