#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_NUMERIC, "C");

    // Declaração de variáveis
    char carta01[2], estado01[50], cidade01[50], codigo01[50];
    double populacao01, area01, pib01;
    int pontos_turisticos01;

    char carta02[2], estado02[50], cidade02[50], codigo02[50];
    double populacao02, area02, pib02;
    int pontos_turisticos02;

    // Histórico das rodadas
    char historico[1000] = "";

    // Contadores de vitórias por carta
    int vitoriasCarta01 = 0;
    int vitoriasCarta02 = 0;

    // Entrada de dados para a carta 01
    printf("Vamos entrar com as informações da primeira carta: \n");
    do {
        printf("Entre com a letra da carta (A ou B):\n");
        scanf("%1s", carta01);  // Lê apenas 1 caractere para a carta
    } while (strcmp(carta01, "A") != 0 && strcmp(carta01, "B") != 0); // Valida a carta

    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado01);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade01);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo01);
    printf("Entre com o número da população:\n");
    scanf("%lf", &populacao01);
    printf("Entre com a área total (em km²):\n");
    scanf("%lf", &area01);
    printf("Entre com o PIB (em R$):\n");
    scanf("%lf", &pib01);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos01);

    // Entrada de dados para a carta 02
    printf("\nAgora vamos entrar com as informações da segunda carta: \n");
    do {
        printf("Entre com a letra da carta (A ou B):\n");
        scanf("%1s", carta02);  // Lê apenas 1 caractere para a carta
    } while (strcmp(carta02, "A") != 0 && strcmp(carta02, "B") != 0); // Valida a carta

    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado02);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade02);
    printf("Entre com o código (A002, B002...):\n");
    scanf("%s", codigo02);
    printf("Entre com o número da população:\n");
    scanf("%lf", &populacao02);
    printf("Entre com a área total (em km²):\n");
    scanf("%lf", &area02);
    printf("Entre com o PIB (em R$):\n");
    scanf("%lf", &pib02);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos02);

    // Cálculos de Densidade Populacional (população / área)
    double densidade_populacional01 = populacao01 / area01;
    double densidade_populacional02 = populacao02 / area02;

    // Cálculos do SUPER TRUNFO
    float SUPER_TRUNFO01 = populacao01 + area01 + pib01 + densidade_populacional01;
    float SUPER_TRUNFO02 = populacao02 + area02 + pib02 + densidade_populacional02;

    // Menu Interativo
    int opcao;
    int continuar_jogo = 1; // Variável para controlar se o jogador quer continuar jogando
    char resultadoRodada[500];

    do {
        printf("\n### MENU ###\n");
        printf("Escolha o atributo para comparar entre as cartas:\n");
        printf("1. Nome do País (Apenas visual)\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de Pontos Turísticos\n");
        printf("6. Densidade Demográfica\n");
        printf("7. SUPER TRUNFO\n");
        printf("8. Sair\n");  // Opção para sair do jogo
        printf("Escolha uma opção (1-8): ");
        scanf("%d", &opcao);

        int empate = 0; // Variável para controlar se houve empate

        switch (opcao) {
            case 1: // Nome do País (Apenas visual)
                sprintf(resultadoRodada, "\nComparando Nome do País:\nCarta 01: %s - Carta 02: %s\nO Nome do País não é usado para comparação, apenas para exibição.", estado01, estado02);
                break;

            case 2: // População
                if (populacao01 > populacao02) {
                    sprintf(resultadoRodada, "\nComparando População:\nPopulação Carta 01: %.0lf - População Carta 02: %.0lf\nA carta 01 venceu! População maior: %.0lf > %.0lf", populacao01, populacao02, populacao01, populacao02);
                    vitoriasCarta01++; // Incrementa a vitória da carta 01
                } else if (populacao01 < populacao02) {
                    sprintf(resultadoRodada, "\nComparando População:\nPopulação Carta 01: %.0lf - População Carta 02: %.0lf\nA carta 02 venceu! População maior: %.0lf > %.0lf", populacao01, populacao02, populacao02, populacao01);
                    vitoriasCarta02++; // Incrementa a vitória da carta 02
                } else {
                    sprintf(resultadoRodada, "\nComparando População:\nPopulação Carta 01: %.0lf - População Carta 02: %.0lf\nEmpate! Ambas as cartas têm a mesma população.", populacao01, populacao02);
                    empate = 1;
                }
                break;

            case 3: // Área
                if (area01 > area02) {
                    sprintf(resultadoRodada, "\nComparando Área:\nÁrea Carta 01: %.2lf km² - Área Carta 02: %.2lf km²\nA carta 01 venceu! Maior Área: %.2lf km² > %.2lf km²", area01, area02, area01, area02);
                    vitoriasCarta01++; // Incrementa a vitória da carta 01
                } else if (area01 < area02) {
                    sprintf(resultadoRodada, "\nComparando Área:\nÁrea Carta 01: %.2lf km² - Área Carta 02: %.2lf km²\nA carta 02 venceu! Maior Área: %.2lf km² > %.2lf km²", area01, area02, area02, area01);
                    vitoriasCarta02++; // Incrementa a vitória da carta 02
                } else {
                    sprintf(resultadoRodada, "\nComparando Área:\nÁrea Carta 01: %.2lf km² - Área Carta 02: %.2lf km²\nEmpate! Ambas as cartas têm a mesma área.", area01, area02);
                    empate = 1;
                }
                break;

            case 4: // PIB
                if (pib01 > pib02) {
                    sprintf(resultadoRodada, "\nComparando PIB:\nPIB Carta 01: %.2lf - PIB Carta 02: %.2lf\nA carta 01 venceu! Maior PIB: %.2lf > %.2lf", pib01, pib02, pib01, pib02);
                    vitoriasCarta01++; // Incrementa a vitória da carta 01
                } else if (pib01 < pib02) {
                    sprintf(resultadoRodada, "\nComparando PIB:\nPIB Carta 01: %.2lf - PIB Carta 02: %.2lf\nA carta 02 venceu! Maior PIB: %.2lf > %.2lf", pib01, pib02, pib02, pib01);
                    vitoriasCarta02++; // Incrementa a vitória da carta 02
                } else {
                    sprintf(resultadoRodada, "\nComparando PIB:\nPIB Carta 01: %.2lf - PIB Carta 02: %.2lf\nEmpate! Ambos os países têm o mesmo PIB.", pib01, pib02);
                    empate = 1;
                }
                break;

            case 5: // Pontos Turísticos
                if (pontos_turisticos01 > pontos_turisticos02) {
                    sprintf(resultadoRodada, "\nComparando Pontos Turísticos:\nPontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\nA carta 01 venceu! Maior número de pontos turísticos: %d > %d", pontos_turisticos01, pontos_turisticos02, pontos_turisticos01, pontos_turisticos02);
                    vitoriasCarta01++; // Incrementa a vitória da carta 01
                } else if (pontos_turisticos01 < pontos_turisticos02) {
                    sprintf(resultadoRodada, "\nComparando Pontos Turísticos:\nPontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\nA carta 02 venceu! Maior número de pontos turísticos: %d > %d", pontos_turisticos01, pontos_turisticos02, pontos_turisticos02, pontos_turisticos01);
                    vitoriasCarta02++; // Incrementa a vitória da carta 02
                } else {
                    sprintf(resultadoRodada, "\nComparando Pontos Turísticos:\nPontos Turísticos Carta 01: %d - Pontos Turísticos Carta 02: %d\nEmpate! Ambas as cartas têm o mesmo número de pontos turísticos.", pontos_turisticos01, pontos_turisticos02);
                    empate = 1;
                }
                break;

            case 6: // Densidade Populacional
                if (densidade_populacional01 > densidade_populacional02) {
                    sprintf(resultadoRodada, "\nComparando Densidade Populacional:\nDensidade Carta 01: %.2lf hab/km² - Densidade Carta 02: %.2lf hab/km²\nA carta 01 venceu! Maior Densidade Populacional: %.2lf > %.2lf", densidade_populacional01, densidade_populacional02, densidade_populacional01, densidade_populacional02);
                    vitoriasCarta01++; // Incrementa a vitória da carta 01
                } else if (densidade_populacional01 < densidade_populacional02) {
                    sprintf(resultadoRodada, "\nComparando Densidade Populacional:\nDensidade Carta 01: %.2lf hab/km² - Densidade Carta 02: %.2lf hab/km²\nA carta 02 venceu! Maior Densidade Populacional: %.2lf > %.2lf", densidade_populacional01, densidade_populacional02, densidade_populacional02, densidade_populacional01);
                    vitoriasCarta02++; // Incrementa a vitória da carta 02
                } else {
                    sprintf(resultadoRodada, "\nComparando Densidade Populacional:\nDensidade Carta 01: %.2lf hab/km² - Densidade Carta 02: %.2lf hab/km²\nEmpate! Ambas as cartas têm a mesma densidade populacional.", densidade_populacional01, densidade_populacional02);
                    empate = 1;
                }
                break;

            case 7: // SUPER TRUNFO
                if (SUPER_TRUNFO01 > SUPER_TRUNFO02) {
                    sprintf(resultadoRodada, "\nComparando SUPER TRUNFO:\nSUPER TRUNFO Carta 01: %.2f - SUPER TRUNFO Carta 02: %.2f\nA carta 01 venceu! SUPER TRUNFO MAIOR: %.2f > %.2f", SUPER_TRUNFO01, SUPER_TRUNFO02, SUPER_TRUNFO01, SUPER_TRUNFO02);
                    vitoriasCarta01++; // Incrementa a vitória da carta 01
                } else if (SUPER_TRUNFO01 < SUPER_TRUNFO02) {
                    sprintf(resultadoRodada, "\nComparando SUPER TRUNFO:\nSUPER TRUNFO Carta 01: %.2f - SUPER TRUNFO Carta 02: %.2f\nA carta 02 venceu! SUPER TRUNFO MAIOR: %.2f > %.2f", SUPER_TRUNFO01, SUPER_TRUNFO02, SUPER_TRUNFO02, SUPER_TRUNFO01);
                    vitoriasCarta02++; // Incrementa a vitória da carta 02
                } else {
                    sprintf(resultadoRodada, "\nComparando SUPER TRUNFO:\nSUPER TRUNFO Carta 01: %.2f - SUPER TRUNFO Carta 02: %.2f\nEmpate! Ambas as cartas têm o mesmo SUPER TRUNFO.", SUPER_TRUNFO01, SUPER_TRUNFO02);
                    empate = 1;
                }
                break;

            case 8: // Sair
                printf("Você escolheu sair. Obrigado por jogar!\n");
                return 0;

            default:
                printf("Opção inválida! Tente novamente.\n");
                continue;
        }

        // Armazenando o histórico da rodada
        strcat(historico, resultadoRodada);

        // Exibindo o resultado da rodada
        printf("%s\n", resultadoRodada);

        // Pergunta se o jogador quer continuar
        if (!empate) {
            printf("\nDeseja jogar outra rodada? (1 - Sim / 0 - Não): ");
            scanf("%d", &continuar_jogo);
            if (continuar_jogo == 0) {
                printf("Obrigado por jogar!\n");
                printf("\n--- Histórico das Rodadas ---\n");
                printf("%s", historico);  // Exibe o histórico das rodadas

                // Exibe o resultado final
                if (vitoriasCarta01 > vitoriasCarta02) {
                    printf("\nCarta 01 venceu %d rodadas!\n", vitoriasCarta01);
                    printf("Carta 01 é a carta vencedora!\n");
                } else if (vitoriasCarta02 > vitoriasCarta01) {
                    printf("\nCarta 02 venceu %d rodadas!\n", vitoriasCarta02);
                    printf("Carta 02 é a carta vencedora!\n");
                } else {
                    printf("\nEmpate! Ambas as cartas venceram o mesmo número de rodadas.\n");
                }
            }
        }

    } while (continuar_jogo);

    return 0;
}

