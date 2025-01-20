#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado;
    char codigoDaCarta[5], nomeDaCidade[20];
    int populacao, pontosTuristicos;
    float area, pib;

    //Letra da carta
    printf("\ninsira uma letra de A a H: ");
    scanf("%c",&Estado);
    
    //Codigo da carta
    printf("\ninsira agora um codigo para letra de 01 a 04: ");
    scanf("%s",codigoDaCarta);

    //Nome da cidade
    printf("\ninsira o nome da cidade: ");
    scanf("%s", nomeDaCidade);

    //População
    printf("\ninsira a quantidade da população: ");
    scanf("%d", &populacao);

    //área
    printf("\ninsira a area da cidade: ");
    scanf("%f", &area);

    //pib
    printf("\ninsira o pib da cidade: ");
    scanf("%f", &pib);

    printf("\ninsira o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
    printf("\nEstado: %c \n",Estado);
    printf("Código da carta: %c%s \n", Estado,codigoDaCarta);
    printf("Nome da cidade: %s \n", nomeDaCidade);
    printf("população: %d \n", populacao);
    printf("Área: %f Km² \n", area);
    printf("PIB: %f bilhóes de Reais \n", pib);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos);
    
    return 0;
}
