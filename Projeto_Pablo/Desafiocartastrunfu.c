#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaração de variáveis
    char carta01[50], estado01[50], cidade01[50], codigo01[50];
    float populacao01, area01, pib01, densidade_populacional01;
    int pontos_turisticos01;

    char carta02[50], estado02[50], cidade02[50], codigo02[50];
    float populacao02, area02, pib02, densidade_populacional02;
    int pontos_turisticos02;

    // Entrada de dados para a carta 01
    printf("Vamos entrar com as informações da primeira carta: \n");
    printf("Entre com a letra da carta (A ou B):\n");
    scanf("%s", carta01);
    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado01);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade01);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo01);
    printf("Entre com número da população:\n");
    scanf("%f", &populacao01);
    printf("Entre com a área total (em km²):\n");
    scanf("%f", &area01);
    printf("Entre com o PIB (em R$):\n");
    scanf("%f", &pib01);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos01);

    // Entrada de dados para a carta 02
    printf("Agora vamos entrar com as informações da segunda carta: \n");
    printf("Entre com a letra da carta (A ou B):\n");
    scanf("%s", carta02);
    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado02);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade02);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo02);
    printf("Entre com número da população:\n");
    scanf("%f", &populacao02);
    printf("Entre com a área total (em km²):\n");
    scanf("%f", &area02);
    printf("Entre com o PIB (em R$):\n");
    scanf("%f", &pib02);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos02);

    // Cálculos de Densidade Populacional (população / área)
    densidade_populacional01 = populacao01 / area01;
    densidade_populacional02 = populacao02 / area02;

    // Menu Interativo
    int opcao;
    printf("\n### MENU ###\n");
    printf("Escolha o atributo para comparar entre as cartas:\n");
    printf("1. Nome do País\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Escolha uma opção (1-6): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // Nome do País
            printf("\nComparando Nome do País:\n");
            printf("Carta 01: %s - Carta 02: %s\n", estado01, estado02);
            printf("O Nome do País não é usado para comparação, apenas para exibição.\n");
            break;

        case 2: // População
            printf("\nComparando População:\n");
            printf("População Carta 01: %.0f - População Carta 02: %.0f\n", populacao01, populacao02);
            if (populacao01 > populacao02) {
                printf("A carta 01 venceu! População maior: %.0f > %.0f\n", populacao01, populacao02);
            } else if (populacao01 < populacao02) {
                printf("A carta 02 venceu! População maior: %.0f > %.0f\n", populacao02, populacao01);
            } else {
                printf("Empate! Ambas as cartas têm a mesma população.\n");
            }
            break;

        case 3: // Área
            printf("\nComparando Área:\n");
            printf("Área Carta 01: %.2f km² - Área Carta 02: %.2f km²\n", area01, area02);
            if (area01 > area02) {
                printf("A carta 01 venceu! Maior Área: %.2f km² > %.2f km²\n", area01, area02);
            } else if (area01 < area02) {
                printf("A carta 02 venceu! Maior Área: %.2f km² > %.2f km²\n", area02, area01);
            } else {
                printf("Empate! Ambas as cartas têm a mesma área.\n");
            }
            break;

        case 4: // PIB
            printf("\nComparando PIB:\n");
            printf("PIB Carta 01: %.2f - PIB Carta 02: %.2f\n", pib01, pib02);
            if (pib01 > pib02) {
                printf("A carta 01 venceu! Maior PIB: %.2f > %.2f\n", pib01, pib02);
            } else if (pib01 < pib02) {
                printf("A carta 02 venceu! Maior PIB: %.2f > %.2f\n", pib02, pib01);
            } else {
                printf("Empate! Ambos os países têm o mesmo PIB.\n");
            }
            break;

        case 5: // Número de Pontos Turísticos
            printf("\nComparando Número de Pontos Turísticos:\n");
            printf("Pontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\n", pontos_turisticos01, pontos_turisticos02);
            if (pontos_turisticos01 > pontos_turisticos02) {
                printf("A carta 01 venceu! Maior número de pontos turísticos: %d > %d\n", pontos_turisticos01, pontos_turisticos02);
            } else if (pontos_turisticos01 < pontos_turisticos02) {
                printf("A carta 02 venceu! Maior número de pontos turísticos: %d > %d\n", pontos_turisticos02, pontos_turisticos01);
            } else {
                printf("Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;

        case 6: // Densidade Demográfica
            printf("\nComparando Densidade Demográfica:\n");
            printf("Densidade Populacional Carta 01: %.2f habitantes/km² - Densidade Populacional Carta 02: %.2f habitantes/km²\n", densidade_populacional01, densidade_populacional02);
            if (densidade_populacional01 < densidade_populacional02) {
                printf("A carta 01 venceu! Menor Densidade Populacional: %.2f < %.2f\n", densidade_populacional01, densidade_populacional02);
            } else if (densidade_populacional01 > densidade_populacional02) {
                printf("A carta 02 venceu! Menor Densidade Populacional: %.2f < %.2f\n", densidade_populacional02, densidade_populacional01);
            } else {
                printf("Empate! Ambas as cartas têm a mesma Densidade Populacional.\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}