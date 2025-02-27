#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis carta 1
    char estado[50] = "São Paulo";
    char codigodacarta[50] = "B01";
    char nomedacidade[50] = "Bauru";
    int populacao = 379174;
    float area = 668.684;
    float pib = 16000000000;
    int pontosturisticos = 3;
    float densidadepopulacional = (float)populacao / area;
    float pibpercapita = pib / populacao;

    // Variáveis carta 2
    char estado2[50] = "São Paulo";
    char codigodacarta2[50] = "B02";
    char nomedacidade2[50] = "Arealva";
    int populacao2 = 479174;
    float area2 = 557.573;
    float pib2 = 15000000000;
    int pontosturisticos2 = 3;
    float densidadepopulacional2 = (float)populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Jogador
    int escplayer1, esccpu;

    // Variáveis de cálculo
    float inversaDensidade = (densidadepopulacional > 0) ? (1 / densidadepopulacional) : 0;
    float inversadensidade2 = (densidadepopulacional2 > 0) ? (1 / densidadepopulacional2) : 0;
    float superpoder = populacao + area + pib + pontosturisticos + pibpercapita + inversaDensidade;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversadensidade2;

    srand(time(0));

    // Menu
    printf("*** Menu Principal ***\n");
    printf("1- Jogar\n");
    printf("2- Regras do Jogo\n");
    printf("3- Desistir\n");
    scanf("%d", &escplayer1);

    switch (escplayer1) {
    case 1:
        printf("Vamos jogar!\n");
        break;
    case 2:
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
        break;
    case 3:
        printf("Obrigado por jogar!\n");
        return 0;
    default:
        printf("Opção inválida!\n");
        break;
    }

    esccpu = rand() % 2 + 1; // CPU pode escolher entre carta 1 ou carta 2

    printf("\nEscolha uma carta:\n");
    printf("1- %s\n", codigodacarta);
    printf("2- %s\n", codigodacarta2);
    scanf("%d", &escplayer1);

    //exibir carta 1 
    
    switch (escplayer1) {
        case 1:
            // Exibição da Carta 1
            printf("\n*** Carta %s ***\n", codigodacarta);
            printf("Estado: %s\n", estado);
            printf("Nome da Cidade: %s\n", nomedacidade);
            printf("1- População: %d\n", populacao);
            printf("2- Área: %.3f\n", area);
            printf("3- PIB: %.3f\n", pib);
            printf("4- Pontos Turísticos: %d\n", pontosturisticos);
            printf("5- Densidade Populacional: %.2f\n", densidadepopulacional);
            printf("6- PIB per Capita: %.2f\n", pibpercapita);
            printf("7- SUPER PODER: %.3f\n", superpoder);
            break;
        case 2:
            // Exibição da Carta 2
            printf("\n*** Carta %s ***\n", codigodacarta2);
            printf("Estado: %s\n", estado2);
            printf("Código da carta: %s\n", codigodacarta2);
            printf("Nome da Cidade: %s\n", nomedacidade2);
            printf("1- População: %d\n", populacao2);
            printf("2- Área: %.3f\n", area2);
            printf("3- PIB: %.3f\n", pib2);
            printf("4- Pontos Turísticos: %d\n", pontosturisticos2);
            printf("5- Densidade Populacional: %.2f\n", densidadepopulacional2);
            printf("6- PIB per Capita: %.2f\n", pibpercapita2);
            printf("7- SUPER PODER: %.3f\n", superpoder2);
            break;
        default:
            printf("Desculpe, não temos essa carta!\n");
            break;
        }

    printf("Escolha um dos Atributos: ");
    scanf("%d", &escplayer1);

    int atributo = escplayer1;

    float valorJogador = 0;
    float valorCPU = 0;
    char *cidadeJogador = (escplayer1 == 1) ? nomedacidade : nomedacidade2;
    char *cidadeCPU = (esccpu == 1) ? nomedacidade : nomedacidade2;

    // Atributos Jogador e CPU (comparação do mesmo atributo)
    switch (atributo) {
    case 1:
        valorJogador = (escplayer1 == 1) ? populacao : populacao2;
        valorCPU = (esccpu == 1) ? populacao : populacao2;
        break;
    case 2:
        valorJogador = (escplayer1 == 1) ? area : area2;
        valorCPU = (esccpu == 1) ? area : area2;
        break;
    case 3:
        valorJogador = (escplayer1 == 1) ? pib : pib2;
        valorCPU = (esccpu == 1) ? pib : pib2;
        break;
    case 4:
        valorJogador = (escplayer1 == 1) ? pontosturisticos : pontosturisticos2;
        valorCPU = (esccpu == 1) ? pontosturisticos : pontosturisticos2;
        break;
    case 5:
        valorJogador = (escplayer1 == 1) ? densidadepopulacional : densidadepopulacional2;
        valorCPU = (esccpu == 1) ? densidadepopulacional : densidadepopulacional2;
        break;
    case 6:
        valorJogador = (escplayer1 == 1) ? pibpercapita : pibpercapita2;
        valorCPU = (esccpu == 1) ? pibpercapita : pibpercapita2;
        break;
    case 7:
        valorJogador = (escplayer1 == 1) ? superpoder : superpoder2;
        valorCPU = (esccpu == 1) ? superpoder : superpoder2;
        break;
    default:
        printf("Desculpe, não temos esse Atributo!\n");
        return 0;
    }

    // Exibição do resultado da comparação
    printf("\nResultado da Comparação:\n");
    printf("Cidade do Jogador: %s\n", cidadeJogador);
    printf("Cidade da CPU: %s\n", cidadeCPU);
    printf("Atributo escolhido: %d\n", atributo);
    printf("Valor do Jogador: %.3f\n", valorJogador);
    printf("Valor da CPU: %.3f\n", valorCPU);

    // Comparação para ver quem venceu
    if (atributo == 5) {
        // Regra invertida para a densidade populacional
        if (valorJogador < valorCPU) {
            printf("\n🎉 O Jogador venceu!\n");
        } else if (valorJogador > valorCPU) {
            printf("\n🎉 A CPU venceu!\n");
        } else {
            printf("\n🤝 Empate!\n");
        }
    } else {
        if (valorJogador > valorCPU) {
            printf("\n🎉 O Jogador venceu!\n");
        } else if (valorJogador < valorCPU) {
            printf("\n🎉 A CPU venceu!\n");
        } else {
            printf("\n🤝 Empate!\n");
        }
    }

    return 0;
}
