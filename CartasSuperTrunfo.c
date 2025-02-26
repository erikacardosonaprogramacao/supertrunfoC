#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char carta_1[BUFFER_SIZE];
    char estado_1[BUFFER_SIZE];
    char codigo_1[BUFFER_SIZE];
    char cidade_1[BUFFER_SIZE];
    unsigned long populacao1;
    float area1;
    float pib1;
    int qdt_ponto_turistico1;
    char buffer[BUFFER_SIZE]; // Buffer para leitura de entradas numéricas

    printf("********************************************************************\n");
    printf("------------------| JOGO SUPER TRUNFO | CIDADES |--------------------\n");
    printf("********************************************************************\n\n");
    printf("JOGADOR 1 | CADASTRO DE CARTA |\n\n");

    printf("ESCOLHA UMA LETRA DE [A - H] PARA SUA CARTA: ");
    fgets(carta_1, BUFFER_SIZE, stdin);
    carta_1[strcspn(carta_1, "\n")] = 0;

    printf("INFORME O ESTADO: ");
    fgets(estado_1, BUFFER_SIZE, stdin);
    estado_1[strcspn(estado_1, "\n")] = 0;

    printf("INFORME O CÓDIGO DA SUA CARTA [ENTRE 1 E 4]: ");
    fgets(codigo_1, BUFFER_SIZE, stdin);
    codigo_1[strcspn(codigo_1, "\n")] = 0;

    printf("INFORME O NOME DA CIDADE: ");
    fgets(cidade_1, BUFFER_SIZE, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;

    printf("INFORME A POPULAÇÃO DA CIDADE: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    populacao1 = strtoul(buffer, NULL, 10);

    printf("INFORME A ÁREA DA CIDADE EM Km²: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    area1 = strtof(buffer, NULL);

    printf("INFORME O PIB DA CIDADE EM BILHÕES: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    pib1 = strtof(buffer, NULL);

    printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    qdt_ponto_turistico1 = strtol(buffer, NULL, 10);

    printf("\n********************************************************************\n");
    printf("----------------| SUPER TRUNFO - CIDADES 1° CARTA|----------------\n");
    printf("********************************************************************\n\n");

    printf("Carta: %s\n", carta_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", qdt_ponto_turistico1);

    return 0;
}