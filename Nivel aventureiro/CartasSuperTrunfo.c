#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){
    // Variaveis
    char estado1[50], estado2[50];
    char codigodacidade1[50], codigodacidade2[50];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    // Cadastro da Carta 1 : 
    printf("Digite a Sigla do estado: ");
    scanf("%s", estado1);               

    printf("Digite o nome da carta: ");
    scanf("%s", codigodacidade1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);           

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1); 

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / (long double)populacao1;

    // Cadastro da Carta 2:
    printf("\nDigite a Sigla do estado: ");
    scanf("%s", estado2);               

    printf("Digite o nome da carta: ");
    scanf("%s", codigodacidade2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);           

    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / (long double)populacao2;    

    // Exibição dos Dados da Carta 1:
    printf("\n--- Dados da Carta %s ---\n", codigodacidade1);
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\n", estado1, codigodacidade1, nome1);
    printf("População: %d\nÁrea: %.3f KM²\nPIB: %.3f Bilhões de Reais\nNúmero de pontos turísticos: %d\n", populacao1, area1, pib1, pontosturisticos1);
    printf("Densidade Populacional: %.2f habitantes por km²\nPIB per Capita: %.2lf", densidadepopulacional1, pibpercapita1);
    printf("\n-------------------------\n");
 
    // Exibição dos Dados da Carta 2:
    printf("\n--- Dados da Carta %s ---\n", codigodacidade2);
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\n", estado2, codigodacidade2, nome2);
    printf("População: %d\nÁrea: %.3f KM²\nPIB: %.3f Bilhões de Reais\nNúmero de pontos turísticos: %d\n", populacao2, area2, pib2, pontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes por km²\nPIB per Capita: %.2lf", densidadepopulacional2, pibpercapita2);
    printf("\n-------------------------\n");

    return 0;
}
