#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Teste Jhonatan

int main(){
    // Variaveis
    char estado1[50], estado2[50];
    char codigodacidade1[50], codigodacidade2[50];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Cadastro da Carta 1 : 
    
                //Estado
    printf("Digite o nome do estado: ");
    scanf("%sps", &estado1);               
                //Código da carta
    printf("Digite o nome da carta: ");
    scanf("%s", &codigodacidade1);
                //Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome1);           
                //População
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);
                //Area
    printf("Digite o tamanho da area: ");
    scanf("%f", &area1);
                //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
                //Numero de Pontos Turisticos
    printf("Digite a Quantidade de Pontos Turiscos: ");
    scanf("%d", &pontosturisticos1);

    // Exibição dos Dados da Carta 1:

                 //Vizualização da Carta Completa
    printf("\n--- Dados da Carta %s ---\n", codigodacidade1);
    printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\n", estado1, codigodacidade1, nome1);
    printf("População: %d\nÁrea: %.2fKM²\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", populacao1, area1, pib1, pontosturisticos1);
    printf("\n-------------------------\n");


     // Cadastro da Carta 2:
     
                 //Estado
     printf("\nDigite o nome do estado: ");
     scanf("%s", &estado2);               
                 //Código da carta
     printf("Digite o nome da carta: ");
     scanf("%s", &codigodacidade2);
                 //Nome da cidade
     printf("Digite o nome da cidade: ");
     scanf("%s", &nome2);           
                 //População
     printf("Digite o tamanho da população: ");
     scanf("%d", &populacao2);
                 //Area
     printf("Digite o tamanho da area: ");
     scanf("%f", &area2);
                 //PIB
     printf("Digite o PIB: ");
     scanf("%f", &pib2);
                 //Numero de Pontos Turisticos
     printf("Digite a Quantidade de Pontos Turiscos: ");
     scanf("%d", &pontosturisticos2);
 
     // Exibição dos Dados da Carta 2:
 
                  //Vizualização da Carta Completa
     printf("\n--- Dados da Carta %s ---\n", codigodacidade2);
     printf("Estado: %s\nCódigo: %s\nNome da cidade: %s\n", estado2, codigodacidade2, nome2);
     printf("População: %d\nÁrea: %.2fKM²\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", populacao2, area2, pib2, pontosturisticos2);
     printf("\n-------------------------\n");
     
 
    return 0;
}

