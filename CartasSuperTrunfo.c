#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //variaveis da carta
    char codigo[4];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
    //escolhas do usuario
    printf("digite o codigo (exp: a01, a02, b01, b02):\n");
    scanf("%s", &codigo);

    printf("digite a população:\n");
    scanf("%d", &populacao);

    printf("digite a área:\n");
    scanf("%f", &area);

    printf("digite o pib (em bilhões):\n");
    scanf("%lf", &pib);

    printf("digite números de postos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);
   //informção completa da carta
    printf("\ndados da carta\n");

    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.3lf bilhões\nPontos turísticos: %d\n", codigo, populacao, area, pib, pontosTuristicos);


    return 0;
}
