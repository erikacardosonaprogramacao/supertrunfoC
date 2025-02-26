#include <stdio.h> //Entrada e saída de dados.
#include <string.h> //Manipulação de Strings.
#include <locale.h> //Suporte para caracteres especiais no padrão (UTF-8) como acentuação.
#include <stdlib.h> //Definindo o tamanho do buffer para a leitura dos dados.

#define BUFFER_SIZE 256

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
//Declarando as variaveis do programa.
    char carta_1[BUFFER_SIZE],carta_2[BUFFER_SIZE];
    char estado_1[BUFFER_SIZE],estado_2[BUFFER_SIZE];
    char codigo_1[BUFFER_SIZE],codigo_2[BUFFER_SIZE];
    char cidade_1[BUFFER_SIZE],cidade_2[BUFFER_SIZE];
    unsigned long populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int qdt_ponto_turistico1,qdt_ponto_turistico2;
    char buffer[BUFFER_SIZE]; // Buffer para leitura de entradas numéricas

    printf("********************************************************************\n");
    printf("------------------| JOGO SUPER TRUNFO | CIDADES |--------------------\n");
    printf("********************************************************************\n\n");
    //Coletando as informações da primeira carta.
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

    printf("********************************************************************\n");
    printf("********************************************************************\n\n");
    //Coletando as informações da segunda carta.
    printf("JOGADOR 2 | CADASTRO DE CARTA |\n\n");

    printf("ESCOLHA UMA LETRA DE [A - H] PARA SUA CARTA: ");
    fgets(carta_2, BUFFER_SIZE, stdin);
    carta_2[strcspn(carta_2, "\n")] = 0;

    printf("INFORME O ESTADO: ");
    fgets(estado_2, BUFFER_SIZE, stdin);
    estado_2[strcspn(estado_2, "\n")] = 0;

    printf("INFORME O CÓDIGO DA SUA CARTA [ENTRE 1 E 4]: ");
    fgets(codigo_2, BUFFER_SIZE, stdin);
    codigo_2[strcspn(codigo_2, "\n")] = 0;

    printf("INFORME O NOME DA CIDADE: ");
    fgets(cidade_2, BUFFER_SIZE, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;

    printf("INFORME A POPULAÇÃO DA CIDADE: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    populacao2 = strtoul(buffer, NULL, 10);

    printf("INFORME A ÁREA DA CIDADE EM Km²: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    area2 = strtof(buffer, NULL);

    printf("INFORME O PIB DA CIDADE EM BILHÕES: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    pib2 = strtof(buffer, NULL);

    printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    qdt_ponto_turistico2 = strtol(buffer, NULL, 10);

    //Apresentando a primeira carta em jogo.
    printf("\n********************************************************************\n");
    printf("--------------| SUPER TRUNFO - CIDADES 1° CARTA EM JOGO|--------------\n");
    printf("********************************************************************\n\n");

    printf("Carta: %s%s\n", carta_1,codigo_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n\n", qdt_ponto_turistico1);
    //Apresentando a segunda carta em jogo.
    printf("\n********************************************************************\n");
    printf("--------------| SUPER TRUNFO - CIDADES 2° CARTA EM JOGO|--------------\n");
    printf("********************************************************************\n\n");

    printf("Carta: %s%s\n", carta_2,codigo_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n\n", qdt_ponto_turistico2);

    printf("********************************************************************\n");
    printf("********************************************************************\n\n");

    return 0;
}