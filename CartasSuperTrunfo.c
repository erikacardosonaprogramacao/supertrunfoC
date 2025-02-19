#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // O numeral na frente da variavel representa qualcarta se refere sendo 1 para carta 1 e dois para carta 2
    char codigo1[20] = "J01", codigo2[20] = "H02";
    char cidade1[30] = "Natal", cidade2[30] = "Belém";
    int populacao1 = 12325012, ponto1 = 23, populacao2 = 65432155, ponto2 = 75;
    float area1 = 1854.52, pib1 = 589.25, area2 = 1254.85, pib2 = 7896.65;
    char estado1 = 'N', estado2 = 'S';

// Cadastro da carta 1
    printf("\n----------------------Cadastro da Carta 1----------------------- \n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da cidade: \n");
    scanf("%s", codigo1);

    getchar();//Limpa o buffer da entrada
    printf("Nome da cidade: \n");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;// Elimina a quebra de linha do fgets

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto1);

// Cadastro da carta 2
printf("\n----------------------Cadastro da Carta 2----------------------- \n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da cidade: \n");
    scanf("%s", codigo2);

    getchar();// Limpa o buffer da entrada
    printf("Nome da cidade: \n");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; //Elimina a quebra de linha do fgets

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto2);

//Exibição dos dados da carta 1
    printf("\n-----------------------------Carta 1----------------------------- \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1); 
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d de habitantes \n", populacao1); 
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhoes \n", pib1); 
    printf("Número de pontos Turisticos: %d \n", ponto1);
    
//Exibição dos dados da carta 2
    printf("\n-----------------------------Carta 2----------------------------- \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2); 
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d de habitantes \n", populacao2); 
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %f bilhoes \n", pib2); 
    printf("Número de pontos Turisticos: %d \n", ponto2);

    return 0;

}
    
    
