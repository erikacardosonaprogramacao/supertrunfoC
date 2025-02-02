#include <stdio.h>

int main() {

    char nome[10] = "Sao Paulo";
    char codigo[3] = "A01";
    float populacao = 1.0;
    float area = 5.0;
    float pib = 6.0;
    int pontosTuristicos = 20;

    printf("Nome da cidade: %s\n", &nome);
    printf("Codigo da carta:%s\n", &codigo);
    printf("Populacao da cidade: %f\n", populacao);
    printf("Area da cidade: %f\n", &area);
    printf("PIB: %f\n", &pib);
    printf("Numero de pontos turisticos: %d\n", &pontosTuristicos);
    
    scanf("%s", &nome, "%s", &codigo,"%f", &populacao);
    scanf("%f", &area, "%f", &pib, "%d", &pontosTuristicos);

    return 0;

}