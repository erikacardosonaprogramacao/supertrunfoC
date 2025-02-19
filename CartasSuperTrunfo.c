
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char estado = 'G';
    char codigo[20] = "J01";
    char cidade[30] = "Natal";
    int populacao = 12325012, ponto = 23;
    float area = 1854.52, pib = 589.25;

    printf("Insira as informaçoes da carta 1: \n");
    printf("Estado: \n");
    scanf("%c", &estado);
    printf("Código da cidade: \n");
    scanf("%s", codigo);
    printf("Nome da cidade: \n");
    getchar();
    fgets(cidade, 30, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n"),
    scanf("%f", &pib);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto);

    printf("Carta 1: \n" "%s Estado: \n", estado, "%s Codigo: \n", codigo, "%s Nome da cidade: \n", cidade, "%d População: \n", populacao, "%f Área: \n", area, "%f PIB: \n", pib, "%d Número de pontos Turisticos: \n", ponto);


    
    
    
