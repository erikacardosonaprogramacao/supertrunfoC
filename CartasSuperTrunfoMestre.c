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
    int escolha1, escolha2;

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

    // Menu interativo para escolha dos dois atributos de comparação
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &escolha1);

    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Populacional\n");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    float valor1_cartao1, valor1_cartao2, valor2_cartao1, valor2_cartao2;

    // Função para obter o valor dos atributos selecionados
    float obter_valor(int escolha, float pop, float area, double pib, int pontos, float densidade) {
        switch (escolha) {
            case 1: return pop;
            case 2: return area;
            case 3: return pib;
            case 4: return pontos;
            case 5: return densidade;
            default: return 0;
        }
    }

    valor1_cartao1 = obter_valor(escolha1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1);
    valor1_cartao2 = obter_valor(escolha1, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2);
    valor2_cartao1 = obter_valor(escolha2, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1);
    valor2_cartao2 = obter_valor(escolha2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2);

    // Comparação de cada atributo
    int pontosCarta1 = 0, pontosCarta2 = 0;

    if (escolha1 == 5) {
        pontosCarta1 += (valor1_cartao1 < valor1_cartao2) ? 1 : 0;
        pontosCarta2 += (valor1_cartao2 < valor1_cartao1) ? 1 : 0;
    } else {
        pontosCarta1 += (valor1_cartao1 > valor1_cartao2) ? 1 : 0;
        pontosCarta2 += (valor1_cartao2 > valor1_cartao1) ? 1 : 0;
    }

    if (escolha2 == 5) {
        pontosCarta1 += (valor2_cartao1 < valor2_cartao2) ? 1 : 0;
        pontosCarta2 += (valor2_cartao2 < valor2_cartao1) ? 1 : 0;
    } else {
        pontosCarta1 += (valor2_cartao1 > valor2_cartao2) ? 1 : 0;
        pontosCarta2 += (valor2_cartao2 > valor2_cartao1) ? 1 : 0;
    }

    // Determinação do vencedor
    printf("\nResultado:\n");
    printf("%s ganhou %d pontos | %s ganhou %d pontos\n", nome1, pontosCarta1, nome2, pontosCarta2);
    if (pontosCarta1 > pontosCarta2) {
        printf("Vencedor: %s\n", nome1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
