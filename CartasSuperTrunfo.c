#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()  {
    char estado, estado2;
    char codigoCarta[10], codigoCarta2[10];
    char nomeCidade[15], nomeCidade2[15];
    int populacao, populacao2;
    float areaKm2, areaKm2_2;
    float PIB, PIB2;
    int qtdPontosTuristicos, qtdPontosTuristicos2;
    char codigoCartaformatado1[30], codigoCartaformatado2[30];

    printf("\nBem vindo ao super trunfo paises\n");
    printf("\nCadastre duas cartas com os valores pedidos\n");

    printf("\n==============================\n");
    printf("Comece digitando uma letra de A - H que representara um Estado: \n");
    scanf(" %c", &estado);

    printf("Agora um numero de 01 - 04 para identificarmos a carta (Nesse formato especifico 01 - 02): \n");
    scanf("%9s", codigoCarta);

    printf("Digite um nome de uma cidade desse estado: \n");
    scanf("%14s", nomeCidade);

    printf("Digite a populacao total dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area em kilometros quadrados dessa cidade: \n");
    scanf("%f", &areaKm2);

    printf("Digite o pib per capita da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &qtdPontosTuristicos);

    printf("\n==============================\n");
    printf("\nAgora vamos cadastrar a segunda cidade:\n");

    printf("Comece digitando uma letra de A - H que representara um Estado: \n");
    scanf(" %c", &estado2);

    printf("Agora um numero de 01 - 04 para identificarmos a carta (Nao repita o numero da carta anterior!): \n");
    scanf("%9s", codigoCarta2);

    printf("Digite um nome de uma cidade desse estado: \n");
    scanf("%14s", nomeCidade2);

    printf("Digite a populacao total dessa cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em kilometros quadrados dessa cidade: \n");
    scanf("%f", &areaKm2_2);

    printf("Digite o pib per capita da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &qtdPontosTuristicos2);

    printf("\n==============================\n");
    printf("\nCartas cadastradas\n");
    printf("Carta 1\n");
    estado = toupper(estado);
    printf("Estado: %c\n", estado);
    sprintf(codigoCartaformatado1, "%c%s", estado, codigoCarta);
    printf("Codigo: %s\n", codigoCartaformatado1);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %2f\n", areaKm2);
    printf("PIB: %2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", qtdPontosTuristicos);

    printf("\n==============================\n");
    printf("Carta 2\n");
    estado2 = toupper(estado2);
    printf("Estado: %c\n", estado2);
    sprintf(codigoCartaformatado2, "%c%s", estado2, codigoCarta2);
    printf("Codigo: %s\n", codigoCartaformatado2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %2f\n", areaKm2_2);
    printf("PIB: %2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", qtdPontosTuristicos2);
    return 0;
}